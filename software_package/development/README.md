## Development

Most of this structure is already covered in the software_package [README](./software_package/README.md), if you wish to understand more about this then go there. This README entails an overview of each of our libraries which can be found inside this package.  


### Hardware

This library is specific to the exact hardware components which we have used for this project. The key goal of this is to provide an API which allows for abstraction away from the specifics parts for each type of hardware component. For example, through this library the software library is able to interact with the MPU-6050 by treating it as any IMU. You're able to find the exact hardware library which is being abstracted away from inside of `.pio/libdeps`.

Each component is represented with a header file (.h), as well as a concrete implementation (.cpp). This separation of components allows for maximum flexibility and reuse. If one specific component is upgraded or replaced then only the relative header and implementation file should need modifying.

### Component Library Breakdown

|Component|Description|
:--------:|:----------|
|Barometer| This is based off of the `Adafruit_MPL3115A2.h` library. The key functionality of this is reading air pressure and altitude data.|
|IMU      | This is based off of the `Adafruit_MPU6050.h` library. The main purpose of this is to perform accelerometer and gyroscope readings.|
|Parachute| This component is still in development, but aims to simply handle the launching of the parachute ejection charges.|
|SD       | This is based off of the `STM32SD.h` library. The primary functionality for this is performing file reading and writing on the SD card.|
|Servo    | This makes use of the `Servo.h` library. The goal of this component here is adjusting and controlling the angle of the servo.|


### Software   
This library aims to handle all of the logic for our rocket, and works in tandem with the hardware library to achieve this. As it is more abstracted away than the hardware library it is designed to be robust enough to be used with different hardware components. Small things, eg. tuning a value to match a new parts speed, may need updating when replacing and upgrading components, but the core logic should be relatively versatile.

|Component|Description|
:--------:|:----------|
|Debug  |This file is used for debugging messages related to our hardware. It can be used for writing and testing code, as well as pre-, post- and in-flight analysis. |
|States and State Machine   | The state machine handles the current state of the rocket. States contains all potential states the rockets system can be in. For a more in-depth explanation see section 4.1 of the [architecture](/../../architecture_design/architecture_design.md) document, which covers the flow this software is modelled around.|
|Guidance System | This is essentially the main process of our rocket. It handles all of the logic necessary to function, such as the pid, state machine, and all hardware communication. |
|Logging | This handles sending data to both the SD card and LoRa radio. |
