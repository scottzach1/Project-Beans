# Project Charter

- **Project Title:** Group 3 | Avionics | Project Beans
- **Project Start Date:** 17 March 2020
- **Project Finish Date:** 16 November 2020

## Other Key Dates

| Name                      | Due Date       | Deliverable                                   |
|:--------------------------|:---------------|:----------------------------------------------|
| Performance Assessment_1  | 20th May 2020  | "Adequate Performance"                        |
| Performance Assessment_2  | 19th June 2020 | "Adequate Performance"                        |
| Prototype_1(Non-Physical) | June 2020      | Design for Prototype_1                        |
| Prototype_1(Physical)     | August 2020    | Prototype_1                                   |
| Prototype_2(Physical)     | September 2020 | Prototype_2                                   |
| Project Handover          | October 2020   | Documentation and final prototype for project |

## Project Objectives

The objective of this project is to deliver an open-source avionics
package that can store and broadcast flight data to a base station
during a controlled flight.

- Controlled Rocket
- Launch platform (Need to find the specs for this)
- Open source only
- Broadcast
- Location
- Rocket status
- Write Sensors to SD card
- Safe landing

## Budget

The budget is currently an approximation parts may change. The budget is
$300 NZD this will be spent exclusively on hardware.

| COMPONENT        | COST           | NAME/DESCRIPTION/LINK                                                                                                                                                                                                                                                                                                                                                                                                                                        | REASONS FOR CHOICE                                                                                                        |
|:-----------------|:---------------|:-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|:--------------------------------------------------------------------------------------------------------------------------|
| Micro-Controller | $24.95 USD     | Adafruit Feather STM32F405 (168MHz) [BUY](https://www.adafruit.com/product/4382), [Github](https://github.com/adafruit/Adafruit-Feather-STM32F405-Express-PCB), [Documentation](https://www.digikey.co.nz/en/videos/a/adafruit/programming-the-adafruit-feather-stm32f405-express-with-stm32cubeide-maker-io)                                                                                                                                                | Small, Light, Good Opensource Libraries & Good Documentation                                                              |
| IMU              | $17.59 NZD     | BNO055 [BUY](https://nz.mouser.com/ProductDetail/Bosch-Sensortec/BNO055?qs=QhAb4EtQfbV8Z2YmISucWw%3D%3D), [Datasheet](https://nz.mouser.com/datasheet/2/783/BST-BNO055-DS000-1509603.pdf), [Adafruit library](https://learn.adafruit.com/adafruit-bno055-absolute-orientation-sensor/arduino-code)                                                                                                                                                           | Good Libraries, quaternions, Better Documentation                                                                         |
| GPS              | $61.93 NZD     | Adafruit Mini GPS PA1010D [BUY](https://www.digikey.co.nz/products/en?keywords=PA1010D), [Datasheet](https://cdn.taoglas.com/datasheets/GP.1575.25.4.A.02.pdf)                                                                                                                                                                                                                                                                                               | Cheap, Small and Meets requirments                                                                                        |
| Transceivers     | $19.95 USD     | Adafruit RFM96W LoRa Radio Transceiver Breakout - 433 MHz - RadioFruit [BUY](https://www.adafruit.com/product/3073), [Overview](https://learn.adafruit.com/adafruit-rfm69hcw-and-rfm96-rfm95-rfm98-lora-packet-padio-breakouts?fbclid=IwAR35VbMkCNa8vlXsCGSQ_aMt7WncGXr0NET0dsGQH1ARlQAluhj9rdhM1OQ), [Datasheet](https://cdn-learn.adafruit.com/downloads/pdf/adafruit-rfm69hcw-and-rfm96-rfm95-rfm98-lora-packet-padio-breakouts.pdf?timestamp=1592280787) | SPI, Pins for extra antenna                                                                                               |
| Gimbal Servos    | $6.97 NZD each | SERVOMOTOR RC 6V MICR METAL GEAR [BUY](https://www.digikey.com/product-detail/en/dfrobot/SER0011/1738-1232-ND/7087129?fbclid=IwAR3tHvFKb_L4hPvRHZ3XCM0uWsSMUwFsVYjAItaNuxh1T_yVfbpZaJRjYQQ)                                                                                                                                                                                                                                                                  | 15grams Small, Cheap, Has dimension specifications                                                                        |
| Battery          | $12 NZD        | ZIPPY Compact 500mAh 2S 35C Lipo Pack [Buy](https://hobbyking.com/en_us/zippy-compact-500mah-2s-35c-lipo-pack.html?queryID=daa4b6898932867645b366984b5914b9&objectID=24762&indexName=hbk_live_magento_en_us_products)                                                                                                                                                                                                                                        | -Available in Australia, - Sufficient Charge, Voltage and Current discharge specifications, - Cheap, -Light for a battery |
| Power supply     | $3.62 USD      | See power_supply.md                                                                                                                                                                                                                                                                                                                                                                                                                                          | See power_supply.md                                                                                                       |
| -                | ~ $230 NZD     | -                                                                                                                                                                                                                                                                                                                                                                                                                                                            | -                                                                                                                         |


## Roles and Responsibilities

| Name             | Organisation | Role                             | Contact Details            |
|:-----------------|:-------------|:---------------------------------|:---------------------------|
| Andre Geldenhuis | VUW          | Client                           | andre.geldenhuis@vuw.ac.nz |
| Aaron Chen       | VUW          | Project Overseer                 | achen@ecs.vuw.ac.nz        |
| Craig Anslow     | VUW          | Project Overseer                 | craig@ecs.vuw.ac.nz        |
| Jolon Behrent    | VUW          | Project Champion                 | behrenjolo@ecs.vuw.ac.nz   |
| Zachary Scott    | -            | Team Member/Software Specialised | scottzach1@ecs.vuw.ac.nz   |
| Finlay Sargisson | -            | Team Member/Software Specialised | sargisfinl@ecs.vuw.ac.nz   |
| Ron Crisostomo   | -            | Team Member/Software Specialised | crisosron@ecs.vuw.ac.nz    |
| William Fowler   | -            | Team Member/Hardware Specialised | fowlerwill@ecs.vuw.ac.nz   |
| Niels Clayton    | -            | Team Member/Hardware Specialised | claytoniel@ecs.vuw.ac.nz   |
| Billy Robb       | -            | Team Member/Hardware Specialised | robbbill@ecs.vuw.ac.nz     |
