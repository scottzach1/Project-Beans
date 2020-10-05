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
Text GLabel 2950 2600 2    50   BiDi ~ 0
SDA
Text GLabel 2950 2500 2    50   BiDi ~ 0
SCL
Text GLabel 7250 4600 0    50   Input ~ 0
SDA
Text GLabel 7250 4500 0    50   Input ~ 0
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
Text GLabel 1450 2600 0    50   Input ~ 0
Boot
Wire Wire Line
	1850 3500 2000 3500
Text GLabel 6800 1300 0    50   Input ~ 0
SCL
Text GLabel 6800 1400 0    50   Input ~ 0
SDA
Text GLabel 7000 2750 0    50   Input ~ 0
RESET
Text GLabel 7000 2350 0    50   Input ~ 0
MISO
Text GLabel 7000 2450 0    50   Input ~ 0
MOSI
Text GLabel 7000 2550 0    50   Input ~ 0
SCK
Text GLabel 7000 2650 0    50   Input ~ 0
CS
Text GLabel 2950 2300 2    50   Input ~ 0
RESET
Text GLabel 1450 2000 0    50   Input ~ 0
CS
Text GLabel 2950 2200 2    50   Input ~ 0
INT_LORA
Text GLabel 1450 2200 0    50   Output ~ 0
MOSI
Text GLabel 1450 2300 0    50   Input ~ 0
MISO
Text GLabel 1450 2100 0    50   Output ~ 0
SCK
Text GLabel 1450 2400 0    50   Input ~ 0
RX
Text GLabel 1450 2500 0    50   Output ~ 0
TX
$Comp
L power:GND #PWR0101
U 1 1 5F63F4A2
P 7000 4150
F 0 "#PWR0101" H 7000 3900 50  0001 C CNN
F 1 "GND" H 7005 3977 50  0000 C CNN
F 2 "" H 7000 4150 50  0001 C CNN
F 3 "" H 7000 4150 50  0001 C CNN
	1    7000 4150
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0102
U 1 1 5F641D27
P 6650 3200
F 0 "#PWR0102" H 6650 2950 50  0001 C CNN
F 1 "GND" H 6655 3027 50  0000 C CNN
F 2 "" H 6650 3200 50  0001 C CNN
F 3 "" H 6650 3200 50  0001 C CNN
	1    6650 3200
	1    0    0    -1  
$EndComp
Wire Wire Line
	7250 4100 7000 4100
Wire Wire Line
	7000 4100 7000 4150
Wire Wire Line
	8000 2850 8150 2850
Wire Wire Line
	8150 2850 8150 3200
$Comp
L avionics:RFM98 LoRa_Radio1
U 1 1 5F636F5E
P 7500 2600
F 0 "LoRa_Radio1" H 7500 3215 50  0000 C CNN
F 1 "RFM98" H 7500 3124 50  0000 C CNN
F 2 "avionics:RFM98" H 7500 2050 50  0001 C CNN
F 3 "" H 7500 2600 50  0001 C CNN
	1    7500 2600
	1    0    0    -1  
$EndComp
Wire Wire Line
	7000 2250 6650 2250
Wire Wire Line
	6650 2250 6650 2950
Wire Wire Line
	6650 2950 7000 2950
Connection ~ 6650 2950
Wire Wire Line
	6650 2950 6650 3200
Wire Wire Line
	8150 3200 6650 3200
Connection ~ 6650 3200
$Comp
L avionics:MPL3115A2-Adafruit Barometer1
U 1 1 5F6344B6
P 7350 4700
F 0 "Barometer1" H 7728 5146 50  0000 L CNN
F 1 "MPL3115A2-Adafruit" H 7728 5055 50  0000 L CNN
F 2 "avionics:MPL3115A2-Adafruit" H 7400 4450 50  0001 C CNN
F 3 "" H 7350 4700 50  0001 C CNN
	1    7350 4700
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0103
U 1 1 5F6494D0
P 1300 1400
F 0 "#PWR0103" H 1300 1150 50  0001 C CNN
F 1 "GND" H 1305 1227 50  0000 C CNN
F 2 "" H 1300 1400 50  0001 C CNN
F 3 "" H 1300 1400 50  0001 C CNN
	1    1300 1400
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0104
U 1 1 5F649A6E
P 6400 1200
F 0 "#PWR0104" H 6400 950 50  0001 C CNN
F 1 "GND" H 6405 1027 50  0000 C CNN
F 2 "" H 6400 1200 50  0001 C CNN
F 3 "" H 6400 1200 50  0001 C CNN
	1    6400 1200
	1    0    0    -1  
$EndComp
Wire Wire Line
	6800 1200 6400 1200
NoConn ~ 6800 1100
NoConn ~ 8300 1000
NoConn ~ 8300 1100
NoConn ~ 8300 1200
NoConn ~ 8300 1300
NoConn ~ 8300 1400
NoConn ~ 8000 2250
NoConn ~ 8000 2350
NoConn ~ 8000 2650
NoConn ~ 8000 2750
NoConn ~ 7000 2850
NoConn ~ 7250 4200
NoConn ~ 7250 4300
NoConn ~ 7250 4400
NoConn ~ 1450 1500
NoConn ~ 1450 1600
NoConn ~ 1450 1900
NoConn ~ 2950 1500
NoConn ~ 2950 1600
NoConn ~ 2950 1700
$Comp
L Connector_Generic:Conn_01x04 J0
U 1 1 5F64C92F
P 1750 4150
F 0 "J0" V 1622 4330 50  0000 L CNN
F 1 "GPS" V 1713 4330 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Vertical" H 1750 4150 50  0001 C CNN
F 3 "~" H 1750 4150 50  0001 C CNN
	1    1750 4150
	-1   0    0    1   
$EndComp
$Comp
L avionics:MPU-6050-Adafruit IMU1
U 1 1 5F631A9D
P 7550 1250
F 0 "IMU1" H 7550 1865 50  0000 C CNN
F 1 "MPU-6050-Adafruit" H 7550 1774 50  0000 C CNN
F 2 "avionics:MPU6050-adafruit" H 7550 550 50  0001 C CNN
F 3 "DOCUMENTATION" H 7550 650 50  0001 C CNN
	1    7550 1250
	1    0    0    -1  
$EndComp
Text GLabel 6800 1500 0    50   Input ~ 0
INT_IMU
Text GLabel 2950 2400 2    50   Input ~ 0
INT_IMU
Text GLabel 1950 3950 2    50   Input ~ 0
RX
Text GLabel 1950 4050 2    50   Input ~ 0
TX
$Comp
L power:+3.3V #PWR0106
U 1 1 5F65B89E
P 1300 1200
F 0 "#PWR0106" H 1300 1050 50  0001 C CNN
F 1 "+3.3V" V 1315 1328 50  0000 L CNN
F 2 "" H 1300 1200 50  0001 C CNN
F 3 "" H 1300 1200 50  0001 C CNN
	1    1300 1200
	1    0    0    -1  
$EndComp
Wire Wire Line
	1300 1400 1450 1400
NoConn ~ 1450 1100
Wire Wire Line
	1300 1200 1450 1200
$Comp
L power:GND #PWR0105
U 1 1 5F650983
P 2300 4250
F 0 "#PWR0105" H 2300 4000 50  0001 C CNN
F 1 "GND" H 2305 4077 50  0000 C CNN
F 2 "" H 2300 4250 50  0001 C CNN
F 3 "" H 2300 4250 50  0001 C CNN
	1    2300 4250
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR0107
U 1 1 5F661886
P 2100 4250
F 0 "#PWR0107" H 2100 4100 50  0001 C CNN
F 1 "+3.3V" H 2115 4423 50  0000 C CNN
F 2 "" H 2100 4250 50  0001 C CNN
F 3 "" H 2100 4250 50  0001 C CNN
	1    2100 4250
	-1   0    0    1   
$EndComp
Wire Wire Line
	2300 4250 2300 4150
Wire Wire Line
	1950 4150 2300 4150
Wire Wire Line
	1950 4250 2100 4250
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
P 6400 1000
F 0 "#PWR0109" H 6400 850 50  0001 C CNN
F 1 "+3.3V" H 6415 1173 50  0000 C CNN
F 2 "" H 6400 1000 50  0001 C CNN
F 3 "" H 6400 1000 50  0001 C CNN
	1    6400 1000
	1    0    0    -1  
$EndComp
Wire Wire Line
	6400 1000 6800 1000
$Comp
L power:+3.3V #PWR0110
U 1 1 5F67048B
P 8550 2550
F 0 "#PWR0110" H 8550 2400 50  0001 C CNN
F 1 "+3.3V" H 8565 2723 50  0000 C CNN
F 2 "" H 8550 2550 50  0001 C CNN
F 3 "" H 8550 2550 50  0001 C CNN
	1    8550 2550
	1    0    0    -1  
$EndComp
Wire Wire Line
	8550 2550 8000 2550
$Comp
L power:+3.3V #PWR0111
U 1 1 5F671090
P 7000 4000
F 0 "#PWR0111" H 7000 3850 50  0001 C CNN
F 1 "+3.3V" H 7015 4173 50  0000 C CNN
F 2 "" H 7000 4000 50  0001 C CNN
F 3 "" H 7000 4000 50  0001 C CNN
	1    7000 4000
	1    0    0    -1  
$EndComp
Wire Wire Line
	7000 4000 7250 4000
$Comp
L power:GND #PWR0112
U 1 1 5F67C4FF
P 8500 1500
F 0 "#PWR0112" H 8500 1250 50  0001 C CNN
F 1 "GND" H 8505 1327 50  0000 C CNN
F 2 "" H 8500 1500 50  0001 C CNN
F 3 "" H 8500 1500 50  0001 C CNN
	1    8500 1500
	1    0    0    -1  
$EndComp
Wire Wire Line
	8500 1500 8300 1500
$Comp
L Connector:Conn_01x01_Male J1
U 1 1 5F636A13
P 8500 2950
F 0 "J1" H 8472 2882 50  0000 R CNN
F 1 "ANT" H 8472 2973 50  0000 R CNN
F 2 "Connector_Wire:SolderWire-0.1sqmm_1x01_D0.4mm_OD1mm" H 8500 2950 50  0001 C CNN
F 3 "~" H 8500 2950 50  0001 C CNN
	1    8500 2950
	-1   0    0    1   
$EndComp
Wire Wire Line
	8000 2950 8300 2950
Text GLabel 8000 2450 2    50   Input ~ 0
INT_LORA
$Comp
L avionics:Adafruit_Feather_STM32F405 STM32
U 1 1 5F62EEAA
P 2200 1850
F 0 "STM32" H 2200 2965 50  0000 C CNN
F 1 "Adafruit_Feather_STM32F405" H 2200 2874 50  0000 C CNN
F 2 "avionics:Adafruit_Feather_STM32F405" H 2200 1750 50  0001 C CNN
F 3 "" H 2200 1650 50  0001 C CNN
	1    2200 1850
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x01_Male J3
U 1 1 5F65726D
P 1100 1700
F 0 "J3" H 800 1750 50  0000 R CNN
F 1 "SER_2" H 1100 1750 50  0000 R CNN
F 2 "Connector_Wire:SolderWire-0.1sqmm_1x01_D0.4mm_OD1mm" H 1100 1700 50  0001 C CNN
F 3 "~" H 1100 1700 50  0001 C CNN
	1    1100 1700
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x01_Male J2
U 1 1 5F658B0B
P 1100 1800
F 0 "J2" H 800 1850 50  0000 R CNN
F 1 "SER_1" H 1100 1850 50  0000 R CNN
F 2 "Connector_Wire:SolderWire-0.1sqmm_1x01_D0.4mm_OD1mm" H 1100 1800 50  0001 C CNN
F 3 "~" H 1100 1800 50  0001 C CNN
	1    1100 1800
	1    0    0    -1  
$EndComp
Wire Wire Line
	1300 1700 1450 1700
Wire Wire Line
	1300 1800 1450 1800
$Comp
L Connector:Conn_01x01_Male J4
U 1 1 5F65C68E
P 3250 2100
F 0 "J4" H 3000 2050 50  0000 R CNN
F 1 "IGN_1" H 3250 2050 50  0000 R CNN
F 2 "Connector_Wire:SolderWire-0.1sqmm_1x01_D0.4mm_OD1mm" H 3250 2100 50  0001 C CNN
F 3 "~" H 3250 2100 50  0001 C CNN
	1    3250 2100
	-1   0    0    1   
$EndComp
$Comp
L Connector:Conn_01x01_Male J5
U 1 1 5F65D9FC
P 3250 2000
F 0 "J5" H 3000 1950 50  0000 R CNN
F 1 "IGN_2" H 3250 1950 50  0000 R CNN
F 2 "Connector_Wire:SolderWire-0.1sqmm_1x01_D0.4mm_OD1mm" H 3250 2000 50  0001 C CNN
F 3 "~" H 3250 2000 50  0001 C CNN
	1    3250 2000
	-1   0    0    1   
$EndComp
$Comp
L Connector:Conn_01x01_Male J6
U 1 1 5F65DEA0
P 3250 1900
F 0 "J6" H 3000 1850 50  0000 R CNN
F 1 "IGN_3" H 3250 1850 50  0000 R CNN
F 2 "Connector_Wire:SolderWire-0.1sqmm_1x01_D0.4mm_OD1mm" H 3250 1900 50  0001 C CNN
F 3 "~" H 3250 1900 50  0001 C CNN
	1    3250 1900
	-1   0    0    1   
$EndComp
$Comp
L Connector:Conn_01x01_Male J7
U 1 1 5F65E280
P 3250 1800
F 0 "J7" H 3000 1750 50  0000 R CNN
F 1 "IGN_4" H 3250 1750 50  0000 R CNN
F 2 "Connector_Wire:SolderWire-0.1sqmm_1x01_D0.4mm_OD1mm" H 3250 1800 50  0001 C CNN
F 3 "~" H 3250 1800 50  0001 C CNN
	1    3250 1800
	-1   0    0    1   
$EndComp
Wire Wire Line
	2950 1800 3050 1800
Wire Wire Line
	2950 1900 3050 1900
Wire Wire Line
	2950 2000 3050 2000
Wire Wire Line
	2950 2100 3050 2100
$Comp
L Connector:Conn_01x01_Male J9
U 1 1 5F646CDC
P 1100 1400
F 0 "J9" H 800 1450 50  0000 R CNN
F 1 "GND_IN" H 1100 1450 50  0000 R CNN
F 2 "Connector_Wire:SolderWire-0.1sqmm_1x01_D0.4mm_OD1mm" H 1100 1400 50  0001 C CNN
F 3 "~" H 1100 1400 50  0001 C CNN
	1    1100 1400
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x01_Male J8
U 1 1 5F649BF1
P 1100 1200
F 0 "J8" H 800 1250 50  0000 R CNN
F 1 "3V3_IN" H 1100 1250 50  0000 R CNN
F 2 "Connector_Wire:SolderWire-0.1sqmm_1x01_D0.4mm_OD1mm" H 1100 1200 50  0001 C CNN
F 3 "~" H 1100 1200 50  0001 C CNN
	1    1100 1200
	1    0    0    -1  
$EndComp
NoConn ~ 1450 1300
$EndSCHEMATC