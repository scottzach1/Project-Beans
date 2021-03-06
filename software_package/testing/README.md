# Testing

As explained in the software_package
[README](./software_package/README.md) this directory is solely
dedicated to the testing of the hardware, and/or other aspects of the
software system. For the most part the focus on this package is about
gaining an understanding of the specific hardware components and the
libraries attached to them. This also serves as a 'playground' to
determine how to approach a given task from a technical/practical
perspective. This includes getting each of these working inside of the
PIO structure.

The key goal of this package can be viewed as creating code that works.
That which can than be iterated on and refined both here and in the
`development` package. Due to the experimental nature of this package
there is little structure to each package, with most testing packages
just containing a single `main.cpp`.

## Testing Projects

### Lora testing

This package is and was used for the initial setup of the base station,
which is critical for all communication with Mission Control. The
communication for base station was achieved via the LoRa radio module.
This package contains two further PIO project packages: `Lora STM32` for
the transmission of packets, and `Lora Base Station` for the reading of
packets,.

On of the key discoveries in this process was that the LoRa module
struggled to perform communication at a reasonable frequency. A lot of
this package contains the tuning and tweaking of the LoRa software to
best optimise this transmission rate.

### Generic Testing

This package is and was used for testing a wide range of the components
individually. This includes custom methods, eg. double_test(), for
testing the effectiveness and limitations of performing calculations on
the hardware.

The first iteration of our MPU and SD interaction can also be found
here. This includes logic for initializing components, reading
accelerometer and gyroscope values, adjusting filter bandwidth values,
and reading and writing from files.

### Quaternion Testing

The [`mpu_quat_testing`](./mpu_quat_testing) package is dedicated to
determining how the IMU can angle readings in quaternions. This project
involves some interaction with the i2cdev library for the handling of
quaternions. See
[this issue](https://gitlab.ecs.vuw.ac.nz/course-work/engr300/2020/group3/group-3/-/issues/175)
for more details.

### Servo Testing

The [`mpu_servo_testing`](./mpu_servo_testing) and
[`servo_testing`](./servo_testing) packages gives some insight on how
the software system can interface with the servos of the rocket in order
to get the gimbal to respond to angle readings given by the IMU. The
`mpu_servo_testing` package is explores how the quaternion readings can
be used by the servos, while the `servo_testing` package explores the
usage of methods provided by the adafruit libraries to make the servos
move.

### Testing Environment Experiment

The package
[`testing_environment_experiment`](./testing_environment_experiment) is
a PIO project that demonstrates the CI/CD pipeline capabilities of the
project with regards to unit testing and code coverage, and existing
issues with the current implementation of the CI/CD pipeline.

To demonstrate the CI/CD unit testing and code coverage, this project
contains source code that has no dependencies with adafruit libraries
(e.g the state machine of the software system). This highlights an issue
with the current implementation of the CI/CD of the project. As it
currently stands, the CI/CD pipeline is incapable of testing aspects of
the software system that has dependencies with adafruit libraries, given
the fact that the docker image being used for the CI/CD jobs that
perform unit testing and code coverage reporting are not pre-configured
with the required libraries to execute the tests.

As a proof-of-concept for proper unit testing and code coverage
reporting in the project's pipeline, this is the project that is being
used by the pipeline (see [`.gitlab-ci.yml`](../../.gitlab-ci.yml)) to
demonstrate the execution of tests and code coverage reports in the
project's CI/CD pipeline.

## Creating a test project

To create a test project, make a new directory for the project, and
paste in the contents of the `generic_testing` folder into the newly
made directory. The contents of the `generic_testing` project should be
sufficient for a barebones PIO project. Once the test project has been
made, development on the test project can begin.
