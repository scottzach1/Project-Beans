##### Power Supply
Note: This may change regularly as power requirements change as different components are selected or new considerations are realized.

To properly understand the costs and specifications of the power supply and battery, Prototypes of the power supplies for each voltage rail must be designed. This will be done based on the following list.

| COMPONENT | Current Draw Max  | Voltage Range | Max Power |Notes|
|---------|----------|----|---------------|---|
|Micro-Controller|80mA + (anything its supplies)| 4.2-3.7V or (5V?)|0.336W|Adafruit STM32F405 Feather Express can be powered by USB-will also take battery into the JST jack, This can also charge the Battery when powered by USB @ 100mA, (Maybe could supply Via USB at 5V to reduce number of rails?)|
|IMU|13.7mA|2.4-3.6V|0.04932W|The highest values of the two IMUs were selected|
|GPS (Estimates)|25mA|3-4V|0.1W||
|Transceivers|20-33mA|3-5V|0.1W|Has onboard regulation to 3.3V, so ideally this would connect to a 3.3V rail|
|Gimbal Servos (Estimates)|5-250mA|4.8-6V|1.5W|Servos Draw a small amount of idle current, when activated, this can jump up greatly|
|-|660mA| Rails: 5V, 3.3V | ~3.6W|


###### Rail specifications
| Rail |Components| Current Draw Max  | Max Power OUT |Notes|
|---------|--|----------|-------|---|
|3.3V|IMU, GPS, Transceiver|~72mA|0.25W|This rail could be provided by the Microcontroller|
|5V|Servos|500mA|3W||
|4V|Microcontroller++|~152.5mA|~0.6W||

###### Battery specifications
The largest rail is 5V so a higher battery voltage to handle any overheads of the protection circuits etc.. must be accounted for. Current draw must be greater than 700mA, and battery size must be enough to supply the flight time.

Selected Battery has the following relevant specifications:
- Voltage Fully Charged: 8.4V
- Voltage just before cut off: 6.4V
- Capacity: 500mAh (3.7Wh)
- Max discharge rate: 45C ~ 22.5A
- continuous discharge rate: 35C ~17.5A

So the power supplies must take a 6.4-8.4V input and supply their respective Voltages.
The desired optimizations for these DC-DC supplies are Firstly Minimal footprint, and then efficiency. As a low efficiency will mean more power must be supplied by the battery and a hotter operating temperature.

###### Power Supply BOM
*Designs, Performance diagrams and BOMs for the power supplies are in the Prototypes folder of the hardware section of the directory*

|Supply Output Voltage | Footprint | Cost | Efficiency | Power Dissipated | MAX Rail Power Draw |
|---|---|---|---|---|---|
|4V|77mm<sup>2</sup>|$1.50 USD|95.5%|~0.035W @ 150mA| 0.635W|
|5V|143mm<sup>2</sup>|$2.15 USD|97.3%|~0.09W @ 600mA| 3.69W |
|**Totals**|220mm<sup>2</sup>|$3.62 USD|-|0.125W|**3.745W**|

Note: the BOMs for these may not contain Components available in NZ, When the designs are finalized parts with the same characteristics will be chosen that can be delivered to NZ.

The overall power supply is not complete, need to design the Ignition system and the protection circuits before this list can be complete.
