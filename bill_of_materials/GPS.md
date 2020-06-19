# Possible GPS modules
GPS modules for providing location of avionics package in the event, the location of the package is unknow post flight.

## Top Pick:
The M20048-1 is the best option. It is the most expensive out of the options provided, however, it meets the accuracy requirements, connects via UART and has low power consumption. Also contained within a small package and has a detailed datasheet. As an alternative the J-F2-B3E8-Dr could be used if the budget is tight.
The STA8090WG & GP.1575.25.4.A.02, are even cheaper options. The STA8090WG is mounted to the surface of the PCB and GP.1575.25.4.A.02 is connected via pins and adhesive. 

### Option 1:
#### M20048-1
- "RADIONOVA® RF Receiver GPS 1.575GHz -165dBm On-Board, Trace Module"
- Link to store (Digi-Key): https://www.digikey.co.nz/product-detail/en/antenova/M20048-1/627-1099-1-ND/7931498
- Datasheet: http://antenova.com/wp-content/uploads/2017/10/M20048-1-PS-1.0.pdfhttp://antenova.com/wp-content/uploads/2017/10/M20048-1-PS-1.0.pdf
- Ports: UART
- Price NZD: $26.36
- Positional Accuracy (Horiz): <2.5m
- Cold start time: <35s

### Option 2:
#### J-F2-B3E8-DR
- "Jupiter RF Receiver GPS 1.575GHz -163dBm On-Board, Trace Module"
- Link to store (Digi-Key): https://www.digikey.co.nz/product-detail/en/telit/J-F2-B3E8-DR/943-1024-2-ND/4959429
- Datasheet: https://www.telit.com/wp-content/uploads/2012/01/Telit_Jupiter_JF2_Datasheet.pdf
- Price NZD: $18.42
- Ports: UART, 1PPS, I^2C and SPI
- Positional accuracy to <2.5m
- Cold stat time: <35s

### Option 3:
#### STA8090WG
- "RF Receiver BeiDou, Galileo, GLONASS, GNSS, GPS -162dBm 12Mbps PCB, Surface Mount 77-WLCSP (3.86x3.84)""
- Link (Digi-Key): https://www.digikey.co.nz/product-detail/en/stmicroelectronics/STA8090WG/497-19034-2-ND/9990053
- Datasheet: https://www.st.com/resource/en/datasheet/sta8090wg.pdf
- Price NZD: $7.10852
- Ports: I²C, SPI, UART, USB

### Option 4:
#### GP.1575.25.4.A.02
- "1.575GHz GPS Ceramic Patch RF Antenna 1.570GHz ~ 1.580GHz 1.55dBic Pin Adhesive"
- Link (Digi-key): https://www.digikey.co.nz/product-detail/en/taoglas-limited/GP-1575-25-4-A-02/931-1015-ND/2332642
- Datasheet: https://www.taoglas.com/images/product_images/original_images/GP.1575.25.4.A.02%20GPS%20Patch%20Antenna%201575MHz%20190410.pdf
- Price NZD: $7.50

### Best option:
#### Adafruit Mini GPS PA1010D Module
- [Adafruit](https://learn.adafruit.com/adafruit-mini-gps-pa1010d-module)
- [Digikey](https://www.digikey.co.nz/products/en?keywords=PA1010D)
- [Library]()
