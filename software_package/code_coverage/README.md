# Code Coverage for this project

Given that the development environment of the project is based around the usage of PlatformIO and its unit testing
suite, a very specific set of steps must be taken in order to produce code coverage reports. This readme outlines the
factors involved in producing the code coverage reports correctly.

## TL;DR
- There are scripts that you can run. Firstly, try to make them executable - 
  ```
  cd code_coverage
  chmod u+x execute_tests_coverage.sh
  chmod u+x clean_coverage_info.sh
  ```
- **To produce code coverage reports** - `./execute_tests_coverage.sh path/to/files/to/be/tested path/to/test/files`
    - This will generate a bunch of html files in the `code_coverage` directory which gives you a 
    visual representation of the code coverage (simply view the html files in a browser of your choice)

    - Example Usage:
      - `./execute_tests_coverage.sh lib/control/src test/test_control`
      
- **To cleanup the `code_coverage` directory** - `./clean_coverage_info.sh`
     - This will remove all html files and gcov meta data from the directory

## PIO Unit Testing and Unity
[PIO Unit Testing](https://docs.platformio.org/en/latest/plus/unit-testing.html) uses a C/C++ unit testing framework
known as [Unity](https://github.com/ThrowTheSwitch/Unity) to produce unit testing methods. Given that PIO is prone to
a wide range of configuration and build errors, and the difficult nature of debugging what parts of the build has gone
wrong **the code coverage tools were not implemented to work directly in tandem with PIO, but Unity only**

- What does this mean? - This means that doing a simple `pio test` will not generate any code coverage reports. However,
this also means that the PIO project building and testing is not affected in anyway by the code coverage tools.

This decoupling between Unity and PIO Unit Testing actually makes the generation of the code coverage reports easier,
since we are not fully locked into the PIO ecosystem.

## How does it work?
To spare you as much of the details as possible, all code coverage reporting and generation happens in `code_coverage`
directory. 

**There are 2 scripts in this directory (see TL;DR at the top to see how to execute the scripts)**
- `execute_tests_coverage.sh` - Responsible for using Unity, obtaining all files to be tested, and their
corresponding test files to execute the tests and generate the reports using gcov and gcovr
- `clean_coverage_info.sh` - Removes all generated reports and gcov/gcovr metadata in the directory
(Note that `execute_tests_coverage.sh` also cleans the directory first before testing and generating reports)

## Does it work with GitLab's CI/CD?
TODO:

## Any limitations?
_*Yes.*_
- Both of the scripts do some removal of files and directories which can be dangerous. Particularly, the line 
`rm -R -- */`. Do not replace '*' with a symlink to another directory since this may result in the removal of the linked
directory upon executing the script/s.

- No error checking for arguments of `execute_tests_coverage.sh` - This script does not sanitise the command line
arguments you give it. If you provide no arguments, it will try to obtain all cpp files in the project, including the
stuff from PIO. **Please do not forget to include the command line arguments!** (The scripts themselves don't perform
any writes to the files. They just create copies of the files and store them into the directory. So if you do forget
to add the CLI arguments, do the following: `CTRL + C(cancel) and then ./clean_coverage_info.sh`, then try again).

- `unity.c`, `unity.h` and `unity_internals.h` all need to be in `code_coverage` directory - We need to use Unity's API
in order to execute the tests, and in turn, to generate the reports. **These 3 files need to be in the directory at all
times.**

- All test files must have `#include "unity.h"` (**Note: having directories in this include statement will cause
the scripts to fail**) - The current implementation of the test files (in `/tests`) already do this (as of writing this
document) therefore hopefully this isn't too problematic...

- **_All_** test files must have the following functions declared:
  ```c
  void setUp(void) {
    // Set up before every test execution
  }

  void tearDown(void) {
    // Clean up after every test execution
  }
  ```
  This is due to the fact that the scripts need to compile the test files with `unity.c` directly. For some reason,
  it seems that having these functions is a requirement in order for the compilation to succeed.

- **gcc or g++?** - The project uses a lot of **.cpp*** files, but Unity is written in C (and therefore `unity.c` is of
course, a C file) - Currently, the tests are being compiled and executed by the scripts using g++, although this results
in some warnings. **This problem is still being investigated.**

- Hidden files and folders (i.e files/directories with a '.' at the start) do not get removed by the either of the
scripts. You will have to remove hidden files/directories manually if they are added to the `code_coverage` directory.

- There are probably some other problems. This method of generating code coverage reports is 
still somewhat experimental.






