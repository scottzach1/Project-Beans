# Avionics PCB's

> Description of the different avionics PCB's and libraries

## KiCad

- All PCB's will be designed using the KiCad Cross Platform and Open Source Electronics Design Automation Suite. A selection of custom footprints and symbols used in the following projects can be found in the `kicad_lib/` directory.

- All PCB's within this directory will be subject to standard ERC and DRC rule checks, which will be performed and checked by the CI pipeline.

## PCB's

| File             | Description       |
|:-----------------|:------------------|
| `avionics_base_station/`  | The avionics base station PCB will be used to connect the RFM98 LoRa radio to the [ESP8266 microcontroller](https://www.espressif.com/en/products/socs/esp8266), maintaining a small form-factor. This board is designed to be the final base station product. |
| `avionics_breakout_PCB/`  | The avionics breakout PCB will is the second prototype of the rocket hardware. This PCB will take all of the testing breakout boards that can be found [here](../bill_of_materials/bill_of_materials.md) in the BOM, and will integrate all of then onto a single compact board that is limited to a single side. This board will be used for extensive testing of the hardware in unison. |
| `Final_PCB/` | The avionics final PCB is the final iteration of the PCB. This board will take all of the individual components found on each of the breakouts, and will place them onto a single PCB. This board will also include power supplies for all components, including the ignition circuitry and servo motors.  |

## Libraries

| File             | Description       |
|:-----------------|:------------------|
| `kicad_lib/` | This directory contains a selection of custom footprints and symbols that have been used in the PCB's. This library currently contains footprints for the following parts:

- Adafruit Feather STM32F4D5 Breakout
- ESP8266 Node MCU microcontroller breakout
- Adafruit MPL3115A2 Barometer Breakout
- Adafruit MPU 6050 Breakout
- RFM98 LoRa Radio
