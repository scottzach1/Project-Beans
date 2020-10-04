- as most of this structure is already covered in [Software Package Readme](./software_package/README.md), if you wish to understand this go there.
- no need to discuss old as should be removed for final version
- table format:
|    |    |
|---:|---:|
|    |    |
|    |    |
|    |    |


- hardware lib
    - is specific to the exact hardware we have used
        - can find the exact libraries used in `.pio/libdeps`
    - creates an interface between hardware libraries for abstracted software usage
    - header and cpp file for each specific Component
        - allows only relevant package to be changed if components is replaced/upgraded  
        - barometer
            - uses <Adafruit_MPL3115A2.h>
            - reading pressure and altitude
        - imu
            - <Adafruit_MPU6050.h>
            - accelerometer and gyro readings
        - lora
            - "RadioLib.h"
            - writing packets to base station
        - parachute
            - still in development
            - aims to handle igniting parachute ejection charges
        - sd
            - <STM32SD.h>
            - writing to files stored on the sd
        - servo
            - adjusting angle

- software lib   
    - as it is more abstracted it is designed to be used with any hardware
    - disclaimer: may need retuning with diff components, eg. running at different speeds
    - debug.h
        - used for debugging messages, can be used for writing and testing code, as well as actual flight analysis
    - states && state machine   
        - handle all potential states of rocket
        - see finite state machine in [architecture](../architecture_design/architecture_design.md) (4.1) for an in-depth and higher level understanding of all states and the flow which they follow.
    - guidance system
        - essentially the main process for the rocket
        - handles all logic
            - states, pid, hardware communication via `/hardware` lib API calls
    - logging
        - handles logging to lora and sd card
