EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Text GLabel 3400 2500 2    50   BiDi ~ 0
SDA
Text GLabel 3400 2400 2    50   BiDi ~ 0
SCL
Text GLabel 5000 3900 0    50   Input ~ 0
SDA
Text GLabel 5000 3800 0    50   Input ~ 0
SCL
$Comp
L Switch:SW_Push SW1
U 1 1 5F65522E
P 2200 3500
F 0 "SW1" H 2200 3785 50  0000 C CNN
F 1 "SW_Push" H 2200 3694 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm" H 2200 3700 50  0001 C CNN
F 3 "~" H 2200 3700 50  0001 C CNN
	1    2200 3500
	1    0    0    -1  
$EndComp
Text GLabel 1850 3500 0    50   Input ~ 0
Boot
Text GLabel 1900 2500 0    50   Input ~ 0
Boot
Wire Wire Line
	1850 3500 2000 3500
Text GLabel 4800 1300 0    50   Input ~ 0
SCL
Text GLabel 4800 1400 0    50   Input ~ 0
SDA
Text GLabel 5000 2550 0    50   Input ~ 0
RESET
Text GLabel 5000 2150 0    50   Input ~ 0
MISO
Text GLabel 5000 2250 0    50   Input ~ 0
MOSI
Text GLabel 5000 2350 0    50   Input ~ 0
SCK
Text GLabel 5000 2450 0    50   Input ~ 0
CS
Text GLabel 3400 2200 2    50   Input ~ 0
RESET
Text GLabel 1900 1900 0    50   Input ~ 0
CS
Text GLabel 3400 2100 2    50   Input ~ 0
INT_LORA
Text GLabel 1900 2100 0    50   Output ~ 0
MOSI
Text GLabel 1900 2200 0    50   Input ~ 0
MISO
Text GLabel 1900 2000 0    50   Output ~ 0
SCK
Text GLabel 1900 2300 0    50   Input ~ 0
RX
Text GLabel 1900 2400 0    50   Output ~ 0
TX
$Comp
L power:GND #PWR0101
U 1 1 5F63F4A2
P 4750 3450
F 0 "#PWR0101" H 4750 3200 50  0001 C CNN
F 1 "GND" H 4755 3277 50  0000 C CNN
F 2 "" H 4750 3450 50  0001 C CNN
F 3 "" H 4750 3450 50  0001 C CNN
	1    4750 3450
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0102
U 1 1 5F641D27
P 6150 2850
F 0 "#PWR0102" H 6150 2600 50  0001 C CNN
F 1 "GND" H 6155 2677 50  0000 C CNN
F 2 "" H 6150 2850 50  0001 C CNN
F 3 "" H 6150 2850 50  0001 C CNN
	1    6150 2850
	1    0    0    -1  
$EndComp
Wire Wire Line
	5000 3400 4750 3400
Wire Wire Line
	4750 3400 4750 3450
Wire Wire Line
	6000 2650 6150 2650
$Comp
L avionics:RFM98 LoRa_Radio1
U 1 1 5F636F5E
P 5500 2400
F 0 "LoRa_Radio1" H 5500 3015 50  0000 C CNN
F 1 "RFM98" H 5500 2924 50  0000 C CNN
F 2 "avionics:RFM98" H 5500 1850 50  0001 C CNN
F 3 "" H 5500 2400 50  0001 C CNN
	1    5500 2400
	1    0    0    -1  
$EndComp
Wire Wire Line
	5000 2050 4650 2050
$Comp
L avionics:MPL3115A2-Adafruit Barometer1
U 1 1 5F6344B6
P 5100 4000
F 0 "Barometer1" H 5478 4446 50  0000 L CNN
F 1 "MPL3115A2-Adafruit" H 5478 4355 50  0000 L CNN
F 2 "avionics:MPL3115A2-Adafruit" H 5150 3750 50  0001 C CNN
F 3 "" H 5100 4000 50  0001 C CNN
	1    5100 4000
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0103
U 1 1 5F6494D0
P 1750 1300
F 0 "#PWR0103" H 1750 1050 50  0001 C CNN
F 1 "GND" H 1650 1300 50  0000 C CNN
F 2 "" H 1750 1300 50  0001 C CNN
F 3 "" H 1750 1300 50  0001 C CNN
	1    1750 1300
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0104
U 1 1 5F649A6E
P 4400 1200
F 0 "#PWR0104" H 4400 950 50  0001 C CNN
F 1 "GND" H 4405 1027 50  0000 C CNN
F 2 "" H 4400 1200 50  0001 C CNN
F 3 "" H 4400 1200 50  0001 C CNN
	1    4400 1200
	1    0    0    -1  
$EndComp
Wire Wire Line
	4800 1200 4400 1200
NoConn ~ 4800 1100
NoConn ~ 6300 1000
NoConn ~ 6300 1100
NoConn ~ 6300 1200
NoConn ~ 6300 1300
NoConn ~ 6300 1400
NoConn ~ 6000 2050
NoConn ~ 6000 2150
NoConn ~ 6000 2450
NoConn ~ 6000 2550
NoConn ~ 5000 2650
NoConn ~ 5000 3500
NoConn ~ 5000 3600
NoConn ~ 5000 3700
NoConn ~ 1900 1400
NoConn ~ 1900 1500
NoConn ~ 1900 1800
NoConn ~ 3400 1400
NoConn ~ 3400 1500
NoConn ~ 3400 1600
$Comp
L Connector_Generic:Conn_01x04 J3
U 1 1 5F64C92F
P 3500 3550
F 0 "J3" V 3372 3730 50  0000 L CNN
F 1 "GPS" V 3463 3730 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Vertical" H 3500 3550 50  0001 C CNN
F 3 "~" H 3500 3550 50  0001 C CNN
	1    3500 3550
	-1   0    0    1   
$EndComp
$Comp
L avionics:MPU-6050-Adafruit IMU1
U 1 1 5F631A9D
P 5550 1250
F 0 "IMU1" H 5550 1865 50  0000 C CNN
F 1 "MPU-6050-Adafruit" H 5550 1774 50  0000 C CNN
F 2 "avionics:MPU6050-adafruit" H 5550 550 50  0001 C CNN
F 3 "DOCUMENTATION" H 5550 650 50  0001 C CNN
	1    5550 1250
	1    0    0    -1  
$EndComp
Text GLabel 4800 1500 0    50   Input ~ 0
INT_IMU
Text GLabel 3400 2300 2    50   Input ~ 0
INT_IMU
Text GLabel 3700 3350 2    50   Input ~ 0
RX
Text GLabel 3700 3450 2    50   Input ~ 0
TX
$Comp
L power:+3.3V #PWR0106
U 1 1 5F65B89E
P 1750 1100
F 0 "#PWR0106" H 1750 950 50  0001 C CNN
F 1 "+3.3V" H 1500 1150 50  0000 L CNN
F 2 "" H 1750 1100 50  0001 C CNN
F 3 "" H 1750 1100 50  0001 C CNN
	1    1750 1100
	1    0    0    -1  
$EndComp
Wire Wire Line
	1750 1300 1900 1300
NoConn ~ 1900 1000
Wire Wire Line
	1750 1100 1900 1100
$Comp
L power:GND #PWR0105
U 1 1 5F650983
P 4050 3650
F 0 "#PWR0105" H 4050 3400 50  0001 C CNN
F 1 "GND" H 4055 3477 50  0000 C CNN
F 2 "" H 4050 3650 50  0001 C CNN
F 3 "" H 4050 3650 50  0001 C CNN
	1    4050 3650
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR0107
U 1 1 5F661886
P 3950 3400
F 0 "#PWR0107" H 3950 3250 50  0001 C CNN
F 1 "+3.3V" H 3965 3573 50  0000 C CNN
F 2 "" H 3950 3400 50  0001 C CNN
F 3 "" H 3950 3400 50  0001 C CNN
	1    3950 3400
	1    0    0    -1  
$EndComp
Wire Wire Line
	4050 3650 4050 3550
Wire Wire Line
	3700 3550 4050 3550
$Comp
L power:+3.3V #PWR0108
U 1 1 5F66E8BF
P 2750 3500
F 0 "#PWR0108" H 2750 3350 50  0001 C CNN
F 1 "+3.3V" H 2765 3673 50  0000 C CNN
F 2 "" H 2750 3500 50  0001 C CNN
F 3 "" H 2750 3500 50  0001 C CNN
	1    2750 3500
	1    0    0    -1  
$EndComp
Wire Wire Line
	2400 3500 2750 3500
$Comp
L power:+3.3V #PWR0109
U 1 1 5F66F707
P 4400 1000
F 0 "#PWR0109" H 4400 850 50  0001 C CNN
F 1 "+3.3V" H 4415 1173 50  0000 C CNN
F 2 "" H 4400 1000 50  0001 C CNN
F 3 "" H 4400 1000 50  0001 C CNN
	1    4400 1000
	1    0    0    -1  
$EndComp
Wire Wire Line
	4400 1000 4800 1000
$Comp
L power:+3.3V #PWR0110
U 1 1 5F67048B
P 6550 2350
F 0 "#PWR0110" H 6550 2200 50  0001 C CNN
F 1 "+3.3V" H 6565 2523 50  0000 C CNN
F 2 "" H 6550 2350 50  0001 C CNN
F 3 "" H 6550 2350 50  0001 C CNN
	1    6550 2350
	1    0    0    -1  
$EndComp
Wire Wire Line
	6550 2350 6000 2350
$Comp
L power:+3.3V #PWR0111
U 1 1 5F671090
P 4750 3300
F 0 "#PWR0111" H 4750 3150 50  0001 C CNN
F 1 "+3.3V" H 4765 3473 50  0000 C CNN
F 2 "" H 4750 3300 50  0001 C CNN
F 3 "" H 4750 3300 50  0001 C CNN
	1    4750 3300
	1    0    0    -1  
$EndComp
Wire Wire Line
	4750 3300 5000 3300
$Comp
L power:GND #PWR0112
U 1 1 5F67C4FF
P 6500 1500
F 0 "#PWR0112" H 6500 1250 50  0001 C CNN
F 1 "GND" H 6505 1327 50  0000 C CNN
F 2 "" H 6500 1500 50  0001 C CNN
F 3 "" H 6500 1500 50  0001 C CNN
	1    6500 1500
	1    0    0    -1  
$EndComp
Wire Wire Line
	6500 1500 6300 1500
$Comp
L Connector:Conn_01x01_Male J8
U 1 1 5F636A13
P 6500 2750
F 0 "J8" H 6350 2700 50  0000 R CNN
F 1 "ANT" H 6500 2700 50  0000 R CNN
F 2 "Connector_Wire:SolderWire-0.1sqmm_1x01_D0.4mm_OD1mm" H 6500 2750 50  0001 C CNN
F 3 "~" H 6500 2750 50  0001 C CNN
	1    6500 2750
	-1   0    0    1   
$EndComp
Wire Wire Line
	6000 2750 6300 2750
Text GLabel 6000 2250 2    50   Input ~ 0
INT_LORA
$Comp
L Connector:Conn_01x01_Male J1
U 1 1 5F65726D
P 1550 1600
F 0 "J1" H 1250 1650 50  0000 R CNN
F 1 "SER_2" H 1550 1650 50  0000 R CNN
F 2 "Connector_Wire:SolderWire-0.1sqmm_1x01_D0.4mm_OD1mm" H 1550 1600 50  0001 C CNN
F 3 "~" H 1550 1600 50  0001 C CNN
	1    1550 1600
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x01_Male J2
U 1 1 5F658B0B
P 1550 1700
F 0 "J2" H 1250 1750 50  0000 R CNN
F 1 "SER_1" H 1550 1750 50  0000 R CNN
F 2 "Connector_Wire:SolderWire-0.1sqmm_1x01_D0.4mm_OD1mm" H 1550 1700 50  0001 C CNN
F 3 "~" H 1550 1700 50  0001 C CNN
	1    1550 1700
	1    0    0    -1  
$EndComp
Wire Wire Line
	1750 1600 1900 1600
Wire Wire Line
	1750 1700 1900 1700
$Comp
L Connector:Conn_01x01_Male J7
U 1 1 5F65C68E
P 3700 2000
F 0 "J7" H 3450 1950 50  0000 R CNN
F 1 "IGN_1" H 3700 1950 50  0000 R CNN
F 2 "Connector_Wire:SolderWire-0.1sqmm_1x01_D0.4mm_OD1mm" H 3700 2000 50  0001 C CNN
F 3 "~" H 3700 2000 50  0001 C CNN
	1    3700 2000
	-1   0    0    1   
$EndComp
$Comp
L Connector:Conn_01x01_Male J6
U 1 1 5F65D9FC
P 3700 1900
F 0 "J6" H 3450 1850 50  0000 R CNN
F 1 "IGN_2" H 3700 1850 50  0000 R CNN
F 2 "Connector_Wire:SolderWire-0.1sqmm_1x01_D0.4mm_OD1mm" H 3700 1900 50  0001 C CNN
F 3 "~" H 3700 1900 50  0001 C CNN
	1    3700 1900
	-1   0    0    1   
$EndComp
$Comp
L Connector:Conn_01x01_Male J5
U 1 1 5F65DEA0
P 3700 1800
F 0 "J5" H 3450 1750 50  0000 R CNN
F 1 "IGN_3" H 3700 1750 50  0000 R CNN
F 2 "Connector_Wire:SolderWire-0.1sqmm_1x01_D0.4mm_OD1mm" H 3700 1800 50  0001 C CNN
F 3 "~" H 3700 1800 50  0001 C CNN
	1    3700 1800
	-1   0    0    1   
$EndComp
$Comp
L Connector:Conn_01x01_Male J4
U 1 1 5F65E280
P 3700 1700
F 0 "J4" H 3450 1650 50  0000 R CNN
F 1 "IGN_4" H 3700 1650 50  0000 R CNN
F 2 "Connector_Wire:SolderWire-0.1sqmm_1x01_D0.4mm_OD1mm" H 3700 1700 50  0001 C CNN
F 3 "~" H 3700 1700 50  0001 C CNN
	1    3700 1700
	-1   0    0    1   
$EndComp
NoConn ~ 1900 1200
Wire Wire Line
	3950 3400 3950 3650
Wire Wire Line
	3700 3650 3950 3650
$Comp
L power:GND #PWR0113
U 1 1 5F74C44E
P 4950 2850
F 0 "#PWR0113" H 4950 2600 50  0001 C CNN
F 1 "GND" H 4955 2677 50  0000 C CNN
F 2 "" H 4950 2850 50  0001 C CNN
F 3 "" H 4950 2850 50  0001 C CNN
	1    4950 2850
	1    0    0    -1  
$EndComp
Wire Wire Line
	5000 2750 4950 2750
Wire Wire Line
	4950 2750 4950 2850
Wire Wire Line
	6150 2650 6150 2850
$Comp
L power:GND #PWR0114
U 1 1 5F74F62C
P 4650 2050
F 0 "#PWR0114" H 4650 1800 50  0001 C CNN
F 1 "GND" H 4655 1877 50  0000 C CNN
F 2 "" H 4650 2050 50  0001 C CNN
F 3 "" H 4650 2050 50  0001 C CNN
	1    4650 2050
	1    0    0    -1  
$EndComp
Wire Wire Line
	3400 1700 3500 1700
Wire Wire Line
	3400 1800 3500 1800
Wire Wire Line
	3400 1900 3500 1900
Wire Wire Line
	3400 2000 3500 2000
$Comp
L avionics:Adafruit_Feather_STM32F405 STM32
U 1 1 5F62EEAA
P 2650 1750
F 0 "STM32" H 2650 2865 50  0000 C CNN
F 1 "Adafruit_Feather_STM32F405" H 2650 2774 50  0000 C CNN
F 2 "avionics:Adafruit_Feather_STM32F405" H 2650 1650 50  0001 C CNN
F 3 "" H 2650 1550 50  0001 C CNN
	1    2650 1750
	1    0    0    -1  
$EndComp
$EndSCHEMATC
