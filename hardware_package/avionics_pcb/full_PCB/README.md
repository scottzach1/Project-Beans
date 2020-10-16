## Full PCB - Prototype 1 - Documentation

This PCB is designed to accomodate the STM32F405 processor, the accompanying sensors and peripherals, power circuitry and supporting passive and active electronic components required by the avionics package.

### Schematic
For the schematic we wanted to integrate as many components into the avionics package board as possible to reduce the size and cost associated with manufacutring. In this case the only sensors that are not integrated into the board are the MPU-6050, the GPS and the LoRa radio tranceiver which are on breakout boards connected by headers.

#### Power circuitry
The avionics package is designed to be powered off of a 2-cell LiPo battery supplying a nominal voltage of 7.4V. This is connected to the avionics board via a 3 pin JST connector. Included in series with the +7.4V pin is a fet and polyfuse to protect against reverse polarity and over current. The 7.4V is then passed to two regulator, a 3.3V linear regulator capable of supply up to 1A for the microprocessor and periphals and a 6V switching regulator capable of supplying up to 2A to both of the serovs. So there is a +3.3V and a +6V rail. The ground is referenced to the negative terminal of the battery.

Regarding the 3.3V regulator, a fet and diode are included at the input so that when the battery is connected the 5V supplied by the voltage bus of the USB-C port is cut off by the fet. If the battery is not connected then the device can be powered off of the USB-C port. For verification and debug purporses, LEDs and test points were included at the output of both regulators and an additional test point included for ground. Lastly decoupling capacitors were included between the power rails and power inputs of each of the ICs to isolate any potential noise sources from interfering with the rest of the system.

#### STM32F405 and Adafruit feather design
The STM32F405 was chosen as our design is based on the Adafruit STM32F405 Feather Express development board [available here](https://learn.adafruit.com/adafruit-stm32f405-feather-express/downloads). From this development board we kept the microSD port, the USB-C connector, flash memory, and a redisigned 3.3V regulator. Components and features that we did not integrated from the Adafruit Feather included the USB battery charger and NeoPixel programmable LED. The battery charger was not included as this functionality would make the avionics package bulkier and it is not practical to charge a 2-cell LiPo using USB.

Both of the external oscillator crystals included in the Adafruit feather were not included in the design as the STM32F405 already contains a high speed internal RC oscillator which runs at 16MHz.

#### Sensors and peripherals
For the sensors and periphals, included in the schematic are the IMU, Lora radio tranceiver, barometer and GPS. All of these aside from the barometer are integrated into the PCB. The IMU, radio and gps have pads to connect the breakoutboards for these components via headers. The GPS, barometer and IMU all communicate via I2C protocol while the flash memory and radio module communicate via SPI protocols.

### PCB design
