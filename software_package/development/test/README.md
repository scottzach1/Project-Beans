## Development

The structures covered in the software_package [README](https://gitlab.ecs.vuw.ac.nz/course-work/engr300/2020/group3/group-3/blob/master/software_package/README.md),
if you wish to understand more about this then go there. This README
entails an overview of each of our libraries which can be found inside
this package.


### Hardware

This library is specific to the exact hardware components which we have
used for this project. The key goal of this is to provide an API which
allows for abstraction away from the specifics parts for each type of
hardware component. For example, through this library the software
library is able to interact with the MPU-6050 by treating it as any IMU.
You're able to find the exact hardware library which is being abstracted
away from inside of `.pio/libdeps`.

Each component is represented with a header file (.h), as well as a
concrete implementation (.cpp). This separation of components allows for
maximum flexibility and reuse. If one specific component is upgraded or
replaced then only the relative header and implementation file should
need modifying.

### Current State

Towards the end of development for this project, there was a significant
update to platformio that changed how some of the libraries were
handled. This change, inherently broke the builds on a lot of the team
members devices. For some devices, this can be mitigated by installing
the `Servo` package to the project locally. Then manually moving it into
the `~/.platformio/lib/` directory (global libraries). There were
occasionally issues regarding the i2cdev libraries for the MPU6050 after
integration with the rest of the code base.

### Component Library Breakdown

| Component | Description                                                                                                                                                                                                                                                                                                                                                                        |
|:---------:|:-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Barometer | This is based off of the `Adafruit_MPL3115A2.h` library. The key functionality of this is reading air pressure and altitude data.                                                                                                                                                                                                                                                  |
|    IMU    | This was originally based off of the `Adafruit_MPU6050.h` library. To get more accurate readings this has since been switched to `I2Cdevlib-Core` and `I2Cdevlib-Core`. This allows us to be able to read quaternion values that are inherently less prone to errors and gimbal lock. In general, the main purpose of this is to perform the accelerometer and gyroscope readings. |
| Parachute | This component is still in development, but aims to simply handle the launching of the parachute ejection charges.                                                                                                                                                                                                                                                                 |
|    SD     | This is based off of the `STM32SD.h` library. The primary functionality for this is performing file reading and writing on the SD card.                                                                                                                                                                                                                                            |
|   Servo   | This makes use of the `Servo.h` library. The goal of this component here is adjusting and controlling the angle of the servo.                                                                                                                                                                                                                                                      |

### Software

This library aims to handle all the logic for our rocket, and works in
tandem with the hardware library to achieve this. As it is more
abstracted away than the hardware library it is designed to be robust
enough to be used with different hardware components. Small things, eg.
tuning a value to match a new part speed, may need updating when
replacing and upgrading components, but the core logic should be
relatively versatile.

|        Component         | Description                                                                                                                                                                                                                                                                                                              |
|:------------------------:|:-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|          Debug           | This file is used for debugging messages related to our hardware. It can be used for writing and testing code, as well as pre-, post- and in-flight analysis.                                                                                                                                                            |
| States and State Machine | The state machine handles the current state of the rocket. States contains all potential states the rockets' system can be in. For a more in-depth explanation see section 4.1 of the [architecture](https://gitlab.ecs.vuw.ac.nz/course-work/engr300/2020/group3/group-3/blob/master/architecture_design/architecture-design.md) document, which covers the flow this software is modelled around. |
|     Guidance System      | This is essentially the main process of our rocket. It handles all the logic necessary to function, such as the pid, state machine, and all hardware communication.                                                                                                                                                      |
|         Logging          | This component handles sending data to both the SD card and LoRa radio.                                                                                                                                                                                                                                                  |

