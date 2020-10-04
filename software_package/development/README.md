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
|Servo    | This makes use of the `Servo.h` library. The goal of this component here is adjusting and controllign the angle of the servo.|


### Software   
    - as it is more abstracted it is designed to be used with any hardware
    - disclaimer: may need retuning with diff components, eg. running at different speeds
    - debug.h
        - used for debugging messages, can be used for writing and testing code, as well as actual flight analysis
    - states && state machine   
        - handle all potential states of rocket
        - see finite state machine in [architecture](/../../architecture_design/architecture_design.md) (4.1) for an in-depth and higher level understanding of all states and the flow which they follow.
    - guidance system
        - essentially the main process for the rocket
        - handles all logic
            - states, pid, hardware communication via `/hardware` lib API calls
    - logging
        - handles logging to lora and sd card
