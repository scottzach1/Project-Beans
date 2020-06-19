# IMU Possible Options

#### ICM-20602
- Link to product store: [digikey](https://www.digikey.co.nz/product-detail/en/tdk-invensense/ICM-20602/1428-1060-1-ND/5872875) 
- [Data sheet](https://invensense.tdk.com/wp-content/uploads/2016/10/DS-000176-ICM-20602-v1.0.pdf?ref_disty=digikey)
- [Possible library](https://github.com/ArduPilot/ardupilot/blob/master/libraries/AP_InertialSensor/AP_InertialSensor_Invensense.cpp)
- Price $6.55


#### BNO055
- Link to product store: [Mouser](https://nz.mouser.com/ProductDetail/Bosch-Sensortec/BNO055?qs=QhAb4EtQfbV8Z2YmISucWw%3D%3D)
- [Data sheet](https://nz.mouser.com/datasheet/2/783/BST-BNO055-DS000-1509603.pdf)
- [Adafruit Arduino library](https://learn.adafruit.com/adafruit-bno055-absolute-orientation-sensor/arduino-code)
- Price $17.59\

This library has a lot of built in functionality and is well documented, which should allow for easy use. It also has the ability to return both Euler angles, along with quaternions. This should allow for easier, and less CPU intensive processing of the rocket orientation.
There is also a large selection of available breakout boards for this IMU, which would allow for prototyping before a PCB is designed and ordered. 


#### MPU-6050
- Link to product store: [Mouser](https://nz.mouser.com/ProductDetail/TDK-InvenSense/MPU-6050?qs=sGAEpiMZZMs29kr3d%252BndIw9GjDKvhDTrDi0Wq22t2QQ%3D)
- [Data sheet](https://invensense.tdk.com/wp-content/uploads/2015/02/MPU-6000-Datasheet1.pdf)
- [Library](https://github.com/jrowberg/i2cdevlib/tree/master/Arduino/MPU6050)
- [adafruit library](https://github.com/adafruit/Adafruit_MPU6050)
- [Arduino description page](https://playground.arduino.cc/Main/MPU-6050/)
- Price $12.73

This library is really extensive and might be able to handle the control systems for us as it has built in PID and KI & KP calculators. It Is also a very complex library however which may take a very long time to get a handle on... This should be made easier by the available examples in the library. There is also a large selection of available breakout boards for this IMU, which would allow for prototyping before a PCB is designed and ordered. 


