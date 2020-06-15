#### Radio Receiver:

A component/s to receive data from the rocket and convert data to a format that can be handled by the "Ground control" Team. The requirements for this are that it interfaces via USB, and can receive data from the 433MHz band.
(LoRa modulation is suggested or LoRa is Required?)

| Product | Unit Cost | Desc. |Advantages | Disadvantages | Link |
|---------|-----------|-------|-----------|---------------|------|
| RC1140-RC232 () | $25.49550 NZD |General ISM < 1GHz RC232 Transceiver Module 433MHz ~ 434MHz Antenna Not Included, Castellation Surface Mount, UART Serial interface (GFSK protocol)| -Low power requirements -Relatively cheap -comprehensive data sheet -Transceiver| -Surface Mounting IC, needs construction. |https://www.digikey.co.nz/product-detail/en/radiocrafts-as/RC1140-RC232/1783-1031-1-ND/7100633 |
|RC1140-MBUS3-USB|$187.46150 NZD|RF Transceiver, WIRELESS M-BUS 433 MHZ USB, (802.15.4 Zigbee™ protocol)| - Already has usb interface and protocol, -Transceiver, -Powered by USB port | -Cost |https://www.digikey.co.nz/product-detail/en/radiocrafts-as/RC1140-MBUS3-USB/1783-RC1140-MBUS3-USB-ND/10709711|
|MAX1473EUI+T|$12.32800 NZD| ASK data modulated in the 300MHz to 450MHz range| -Low Power, -Very cheap.|-just an IC|https://www.digikey.co.nz/product-detail/en/maxim-integrated/MAX1473EUI-T/MAX1473EUI-TCT-ND/3679891 |
|RXM-433-LR|$34.84500 NZD| Data Interface	Serial, 	RF RECEIVER protocal(ASK/OOK) 433MHZ|2.1V ~ 3.6V| IC |https://www.digikey.co.nz/product-detail/en/linx-technologies-inc/RXM-433-LR/RXM-433-LR-ND/613947|
|SX1276MB1LAS|$129.24850 NZD| General ISM < 1GHz Transceiver Module 137MHz ~ 1.02GHz Antenna Not Included, SMA Through Hole (SPI serial interface)| Modulation	FSK, GFSK, GMSK, MSK, OOK, |Antenna Not Included, |https://www.digikey.co.nz/product-detail/en/semtech-corporation/SX1276MB1LAS/SX1276MB1LAS-ND/5015647 |
|SX1261IMLTRT|$14.84650 NZD|IC RF TxRx Only General ISM < 1GHz LoRaWAN 150MHz ~ 960MHz 24-VFQFN Exposed Pad (SPI Serial interfaces)||||
|109990165 Seed Studio|$12.75|General ISM < 1GHz LoRa™ Transceiver Module 433MHz Surface Mount SPI| Available libraries and breakout board for easy testing|Uses the BGA package type, however this component is non-critical to the control of the rocket, therefor it is less of an issue|https://www.seeedstudio.com/Grove-LoRa-Radio-868MHz.html https://www.digikey.co.nz/product-detail/en/seeed-technology-co-ltd/109990165/1597-1491-ND/7033235|

Notes:
Radiocrafts has the best options that have been found. Large range of products regarding Comms. all seem good quality. only a few 433MHz products, all seem to be Transceivers which may be harder to set up, if the IC way was the choice. The USB RF-Transceiver they make is comparatively cheap (Compared to FUNdongle).

Most of the options will require antenna and a DC-DC power supply, along with a communication channel to a USB port (must construct a fair bit of shit cost might increase substantially).

There are several LoRa options that will need ^, the full usb units are out of our budget.
