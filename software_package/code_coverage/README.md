# Code Coverage for this project

Given that the development environment of the project is based around
the usage of PlatformIO and its unit testing suite, a very specific set
of steps must be taken in order to produce code coverage reports. This
readme outlines the factors involved in producing the code coverage
reports correctly.

## TLDR

- There are scripts that you can run. Firstly, try to make them
  executable

  ```
  cd code_coverage
  chmod u+x execute_tests_coverage.sh
  chmod u+x clean_coverage_info.sh
  ```

- **To produce code coverage reports** - `./execute_tests_coverage.sh -f path/to/files/to/be/tested -t path/to/test/files`

  - This will generate a bunch of html files in the `code_coverage`
    directory which gives you a visual representation of the code
    coverage (simply view the html files in a browser of your choice)

  - Example Usage: `./execute_tests_coverage.sh -f development/lib/hardware/src -t development/test/test_hardware`

- **To cleanup the `code_coverage` directory** -
  `./clean_coverage_info.sh`

  - This will remove all html files and gcov meta data from the
    directory (note that this is also executed everytime the
    `execute_tests_coverage.sh` script is executed. This is just a useful
    way of cleaning up the `code_coverage` directory if you need to)

- **Specifying multiple test and target directories** - The script is
  able to handle an arbitrary number of test file directories and test
  target directories so long as the command line argument flags are used
  correctly.

  - `-f` - Specifies the path to the target directories
  - `-t` - Specifies the path to the directory where the test files
    are stored

  - Example Usage with multiple directories
    `./execute_tests_coverage.sh -f developmentlib/hardware/src -f development/lib/software/src -t development/test/test_hardware -t development/test/test_software`

## PIO Unit Testing and Unity

[PIO Unit Testing](https://docs.platformio.org/en/latest/plus/unit-testing.html)
uses a C/C++ unit testing framework known as
[Unity](https://github.com/ThrowTheSwitch/Unity) to produce unit testing
methods. Given that PIO is prone to a wide range of configuration and
build errors, and the difficult nature of debugging what parts of the
build has gone wrong, **the code coverage tools were not implemented to
work directly in tandem with PIO, but Unity only.**

- What does this mean? - This means that doing a simple `pio test` will
  not generate any code coverage reports. However, this also means that
  the PIO project building and testing is not affected in anyway by the
  code coverage tools. (i.e the scripts in this directory and the code
  coverage tools should be completely independent of PIO)

This decoupling between Unity and PIO Unit Testing actually makes the
generation of the code coverage reports easier, since we are not fully
locked into the PIO ecosystem.

## How does it work?

To spare you as much of the details as possible, all code coverage
reporting and generation happens in `code_coverage` directory.

**There are 2 scripts in this directory (see TL;DR at the top to see how
to execute the scripts)**

- `execute_tests_coverage.sh` - Responsible for using Unity, obtaining
  all files to be tested, and their corresponding test files to execute
  the tests and generate the reports using gcov and gcovr
- `clean_coverage_info.sh` - Removes all generated reports and
  gcov/gcovr metadata in the directory (Note that
  `execute_tests_coverage.sh` also cleans the directory first before
  testing and generating reports)

## Does it work with GitLab's CI/CD?

Yes. As it currently stands, the CI/CD pipeline of the repo succesfully
produces the code coverage reports. The script for the pipeline
currently compiles and tests _all_ modules in the `lib` folder of the
project. The html files are stored as artifacts and can be downloaded
upon the completion of the `code-coverage` job in the pipeline

**Note 1:** You might notice that even though there are compilation and
build errors in the job's output, the code coverage reports are still
generated, showing '0%' coverage. This means that the code coverage
reporting was succesful, but, because some of the files failed to
compile, they cannot be tested. Therefore, this means that there is 0%
line coverage for the tested files.

- As an aside, the build errors are to do with adafruit libraries not
  not being located correctly in a development environment outside of
  the onboard microcontroller being used for the rocket. This creates
  issues with regards to CI/CD, especially for the unit testing and
  code coverage generation components of the pipeline. An approach to
  demonstrate meaningful code coverage reporting is outlined in Note 2.

**Note 2:** There are actually 2 implementations of the `code-coverage`
job in `.gitlab-ci.yml`. One is named `code-coverage` and the other is
named `code-coverage-poc`.

- `code-coverage` is the intended 'main' code coverage job of the
  repository

- `code-coverage-poc` performs the exact same operations as the main
  `code-coverage` job, but it instead targets a separate PIO project
  that contains source code that does not depend on any adafruit
  dependencies. The reason why this job exists is to serve as a
  proof-of-concept (POC) that demonstrates the capabilities of the
  current code coverage implementation in a meaningful manner. The
  regular `code-coverage` is limited by factors described in Note 1,
  making it difficult to convey the abilities of the current code
  coverage implementation.

The yml code below outlines the code-coverage job.

```yml
code-coverage:
  stage: Test
  tags:
    - docker
  image: gcc
  script:
    - apt-get update
    - apt-get install -y gcovr
    - cd software_package/code_coverage
    - chmod u+x execute_tests_coverage.sh
    - ./execute_tests_coverage.sh -f development/lib/hardware/src -f development/lib/software/src -t development/test/test_hardware -t development/test/test_software
  artifacts:
    paths:
      - software_package/code_coverage/*.html
    untracked: false
    expire_in: 10 days
  allow_failure: true
  coverage: '/^TOTAL.*\s+(\d+\%)$/'
```

## How to write code coverage compliant test files?

Use the following template to write test files that are compliant with
this method of generating code coverage reports.

```c++
#include "unity.h"

void setUp(void) {
  // set stuff up here - This is performed before every unit test
}

void tearDown(void) {
  // clean stuff up here - This is performed after every unit test
}

void unit_test_1() {
  // Perform test
}

// Add more unit tests as necessary

int main() {
  UNITY_BEGIN();

  // Execute tests
  RUN_TEST(unit_test_1);

  return UNITY_END();
}
```

## Any limitations?

_*Yes.*_

- Both of the scripts do some removal of files and directories which can
  be dangerous. Particularly, the line `rm -R -- */`. Do not replace '\*'
  with a symlink to another directory since this may result in the
  removal of the linked directory upon executing the script/s.

- No error checking for arguments of `execute_tests_coverage.sh` - This
  script does not sanitise the command line arguments you give it. If
  you provide no arguments, it will try to obtain all cpp files in the
  project, including the stuff from PIO. **Please do not forget to
  include the command line arguments!** (The scripts themselves don't
  perform any writes to the files. They just create copies of the files
  and store them into the directory. So if you do forget to add the CLI
  arguments, do the following: `CTRL + C(cancel) and then ./clean_coverage_info.sh`, then try again).

- `unity.c`, `unity.h` and `unity_internals.h` all need to be in
  `code_coverage` directory - We need to use Unity's API in order to
  execute the tests, and in turn, to generate the reports. **These 3
  files need to be in the directory at all times.**

- All test files must have `#include "unity.h"` (**Note: having
  directories in this include statement will cause the scripts to
  fail**) - The current implementation of the test files (in `/tests`)
  already do this (as of writing this document) therefore hopefully this
  isn't too problematic...

- **_All_** test files must have the following functions declared:

  ```c
  void setUp(void) {
    // Set up before every test execution
  }

  void tearDown(void) {
    // Clean up after every test execution
  }
  ```

  This is due to the fact that the scripts need to compile the test
  files with `unity.c` directly. For some reason, it seems that having
  these functions is a requirement in order for the compilation to
  succeed.

- **gcc or g++?** - The project uses a lot of **.cpp** files, but Unity
  is written in C (and therefore `unity.c` is of course, a C file) -
  Currently, the tests are being compiled and executed by the scripts
  using g++, although this results in some warnings. **This problem is
  still being investigated.**

- Hidden files and folders (i.e files/directories with a '.' at the
  start) do not get removed by the either of the scripts. You will have
  to remove hidden files/directories manually if they are added to the
  `code_coverage` directory.

- There are probably some other problems. This method of generating code
  coverage reports is still somewhat experimental.

## A note on the CI/CD pipeline with regards to code coverage and testing

As previously outlined, the current implementation of the `code-coverage`
and `unit` test jobs are afflicted by the fact that the adafruit
libraries required to compile and execute the unit tests cannot be found
in any environment other than the microcontroller itself. In terms of the
CI/CD pipeline, these jobs are using docker images that do not have these
libraries, and therefore, **no testing can be done on aspects of the
software system that have any dependencies with the adafruit libraries**.

### Addressing this issue

Due to time constraints, we were unable to implement any of the following
suggestions, but they will be listed here so that future developers have
some working ideas of a solution to the problem.

#### Potential Solutions

- **Create a properly configured docker image to use for the pipeline** -
  All jobs in the CI/CD pipeline are using pre-configured docker images.
  While this is sufficient for some of the jobs in the pipeline, the niche
  nature of PIO and CI/CD for embedded systems means that building a docker
  image solely for the project may be necessary in order for the code
  coverage and unit testing jobs to adequately serve their purpose. The
  docker image should be configured to have all the required adafruit
  libraries that the project uses, so when GitLab pulls the docker image
  for jobs that use it, the jobs will be executed in an environment that
  matches the environment on the actual microcontroller. To align with the
  FOSS requirements of the project, the docker image needs to be made in a
  public docker hub repository.

- **Obtain a second microcontroller purely for testing purposes** - A
  second microcontroller can be obtained and setup to match the environment
  of the original microcontroller such that unit tests can be executed
  correctly. The original microcontroller will retain its purpose as the
  rocket's microcontroller. With this approach, the `unit-test` and
  `code-coverage` jobs will see significant changes in the sense that they
  no longer need to be executed in GitLab's CI/CD pipeline. All unit
  testing and code coverage reporting can be conducted within the second
  microcontroller, with the microcontroller committing the results of the
  unit test and code coverage reports to the repository. The drawback of
  this approach is the obvious cost of acquiring a second micrcontroller
  (although given the safety-critical nature of the project, this is a
  justifiable purchase), and how this approach seemingly steers away from
  the concept of continuous integration and delivery (since the jobs are
  now being executed on a local microcontroller instead of a centralized
  system such as GitLab).
