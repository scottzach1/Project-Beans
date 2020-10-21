# Software Package

> A brief overview of the software layout.

## Platformio

In this directory there are 3 different sub directories, `development`,
`testing` and `code_coverage`. The first two directories are
[PlatformIO](https://platformio.org/) projects. The easiest way to open
them is to install the
[PlatformIO IDE VSCode extension](https://marketplace.visualstudio.com/items?itemName=platformio.platformio-ide),
then `file > open folder > select the desired package`. The latter is
associated with measuring code coverage of the development project.

## Project Overviews

| File             | Description                                                                                                                                                                                                                                                                                                                                    |
|:-----------------|:-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| `development/`   | This package contains the latest development code directly relating to the rocket. This package will contain any libraries the team has written and adhere to the software architecture document.                                                                                                                                              |
| `testing/`       | This package is dedicated to testing the hardware of the rocket and exploring different approaches on how to achieve a technical task. This project will mostly consist of variations of sample code and documentation describing and checking how we might interact with the hardware, as well as checking the hardware performs as expected. |
| `code_coverage/` | This package is not a PlatformIO project and is solely related to code coverage analysis testing. See [here](./code_coverage/README.md).                                                                                                                                                                                                       |

## PlatformIO Structure

### PlatformIO Project Structure

```bash
.
├── platformio.ini
├── include/
│   └── README
├── lib/
│   ├── $package_names/
│   │   ├── src/
│   │   │   ├── $package_sources.cpp
│   │   │   ├── $package_headers.h
│   │   │   └── ...
│   │   └── ...
│   └── README
├── src/
│   └── main.cpp
├── test/
│   ├── README
│   ├── $test_suite/
│   │   └── $test_suite.cpp
│   └── ...
└── .pio/
    ├── build/
    │   ├── $environment_name
    │   └── project.checksum
    └── libdeps/
        ├── $board_name/
        │   ├── $library_sources_for_board
        │   └── ...
        └── ...
```

#### Platformio Project Component Description

| Component                                               | Description                                                                                                                                                                                                                                                                                                                           |
|:--------------------------------------------------------|:--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| platformio.ini                                          | Project configuration file, follows [INI-style](https://en.wikipedia.org/wiki/INI_file) structure. This file defines the different environments to build and test on, including other factors such as extra dependencies and which test suites to ignore More information [here](https://docs.platformio.org/en/latest/projectconf/). |
| README.rst                                              | Instructional information for the directory its held by                                                                                                                                                                                                                                                                               |
| include/                                                | Directory containing all of the project header files to be used between several project file sources. See [here](./development/include/README).                                                                                                                                                                                       |
| lib/                                                    | Directory containing all of the project specific (private libraries). These will be compiled into static libraries and link to executable file. See [here](./development/lib/README).                                                                                                                                                 |
| lib/$package_names/                                     | A directory for each major software package as described in the software architecture document. See diagram [here](../architecture_design/software_architecture/Draw_IO/development-viewpoint-uml-component-diagram-v2.png). For this particular project, there is a package for hardware, and software, as described by the diagram. |
| lib/$package_names/src/$package_{sources.cpp,headers.h} | Individual sources and header files for the private libraries. Visit the `development` project to see live example.                                                                                                                                                                                                                   |
| src/                                                    | Source directory containing the main project executables.                                                                                                                                                                                                                                                                             |
| src/main.cpp                                            | Main project executable. This will be the executable that is built by default with the command `pio run`.                                                                                                                                                                                                                             |
| test/                                                   | Directory containing all of the platformio unit test suites. These suites will be run using platformio unity as specified within the `platformio.ini` configuration file. See more [here](./development/test/README).                                                                                                                 |
| test/$test_suite/                                       | Individual test suites for PlatformIO unit testing. Unit test suites are configurable through pio.ini files and are used by the command `pio test` to execute the unit tests they contain. See [here](https://docs.platformio.org/en/latest/plus/unit-testing.html) for more details.                                                 |
| test/$test_suite/$test_suite.cpp                        | Individual test file that contains unit tests. See [here](https://docs.platformio.org/en/latest/plus/unit-testing.html) for more details on PlatformIO unit testing. A boilerplate unit test file can be found [here](./code_coverage/README.md)                                                                                      |
| .pio/                                                   | Project configuration and build directories (hidden files). This contains both the build locations for PlatformIO as well as any locally stored board specific libraries (Currently, this is populated with all the correct libraries for the feather).                                                                               |
| .pio/build/                                             | Build directories for each environment. These will be cleaned and generated by PlatformIO.                                                                                                                                                                                                                                            |
| .pio/libdeps/                                           | Locally stored libraries for each board (currently, this is populated with all the correct libraries for the feather).                                                                                                                                                                                                                |
