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
$Comp
L PCBwBreakout-rescue:HEADER-1X12-PCBwBreakout-eagle-import JP?
U 1 1 5F621D11
P 1700 1750
F 0 "JP?" H 1778 1853 59  0000 L CNN
F 1 "HEADER-1X12" H 1778 1748 59  0000 L CNN
F 2 "" H 1700 1750 50  0001 C CNN
F 3 "" H 1700 1750 50  0001 C CNN
	1    1700 1750
	1    0    0    -1  
$EndComp
$Comp
L PCBwBreakout-rescue:HEADER-1X16-PCBwBreakout-eagle-import JP?
U 1 1 5F62456E
P 3200 1800
F 0 "JP?" H 3278 1803 59  0000 L CNN
F 1 "HEADER-1X16" H 3278 1698 59  0000 L CNN
F 2 "" H 3200 1800 50  0001 C CNN
F 3 "" H 3200 1800 50  0001 C CNN
	1    3200 1800
	1    0    0    -1  
$EndComp
Wire Wire Line
	3100 1100 2500 1100
Text Label 2600 1100 0    50   ~ 0
BOOT0
Wire Wire Line
	3100 1200 2500 1200
Text Label 2600 1200 0    50   ~ 0
TX_D1
Wire Wire Line
	3100 1300 2500 1300
Text Label 2600 1300 0    50   ~ 0
RX_D0
Wire Wire Line
	3100 1400 2500 1400
Text Label 2600 1400 0    50   ~ 0
MISO
Wire Wire Line
	3100 1500 2500 1500
Text Label 2600 1500 0    50   ~ 0
MOSI
Wire Wire Line
	3100 1600 2500 1600
Text Label 2600 1600 0    50   ~ 0
SCK
Wire Wire Line
	3100 1700 2500 1700
Text Label 2600 1700 0    50   ~ 0
A5
Wire Wire Line
	3100 1800 2500 1800
Text Label 2600 1800 0    50   ~ 0
A4
Wire Wire Line
	3100 1900 2500 1900
Wire Wire Line
	3100 2000 2500 2000
Wire Wire Line
	3100 2100 2500 2100
Wire Wire Line
	3100 2200 2500 2200
Wire Wire Line
	3100 2300 2800 2300
$Comp
L power:GND #PWR?
U 1 1 5F627C6A
P 2800 2300
F 0 "#PWR?" H 2800 2050 50  0001 C CNN
F 1 "GND" V 2805 2172 50  0000 R CNN
F 2 "" H 2800 2300 50  0001 C CNN
F 3 "" H 2800 2300 50  0001 C CNN
	1    2800 2300
	0    1    1    0   
$EndComp
Wire Wire Line
	3100 2400 2900 2400
Wire Wire Line
	3100 2500 2900 2500
Wire Wire Line
	2900 2400 2900 2500
Connection ~ 2900 2500
Wire Wire Line
	2900 2500 2500 2500
Wire Wire Line
	3100 2600 2500 2600
Text Label 2600 2600 0    50   ~ 0
~RESET~
Text Label 2600 1900 0    50   ~ 0
A3
Text Label 2600 2000 0    50   ~ 0
A2
Text Label 2600 2100 0    50   ~ 0
A1
Text Label 2600 2200 0    50   ~ 0
A0
Wire Wire Line
	1600 2250 1100 2250
Wire Wire Line
	1000 1150 1600 1150
Wire Wire Line
	1600 1250 1100 1250
Wire Wire Line
	1600 1350 1000 1350
Wire Wire Line
	1600 1450 1100 1450
Wire Wire Line
	1600 1550 1100 1550
Wire Wire Line
	1600 1650 1100 1650
Wire Wire Line
	1600 1750 1100 1750
Wire Wire Line
	1600 1850 1100 1850
Wire Wire Line
	1600 1950 1100 1950
Wire Wire Line
	1600 2050 1100 2050
Wire Wire Line
	1600 2150 1100 2150
$Comp
L PCBwBreakout-rescue:VBAT-PCBwBreakout-eagle-import ?
U 1 1 5F62F850
P 900 1150
F 0 "?" H 950 1200 50  0001 C CNN
F 1 "VBAT" V 1017 1113 42  0000 C CNN
F 2 "" H 900 1150 50  0001 C CNN
F 3 "" H 900 1150 50  0001 C CNN
	1    900  1150
	0    -1   -1   0   
$EndComp
$Comp
L PCBwBreakout-rescue:VBUS-PCBwBreakout-eagle-import ?
U 1 1 5F630C46
P 900 1350
F 0 "?" H 950 1400 50  0001 C CNN
F 1 "VBUS" V 1017 1313 42  0000 C CNN
F 2 "" H 900 1350 50  0001 C CNN
F 3 "" H 900 1350 50  0001 C CNN
	1    900  1350
	0    -1   -1   0   
$EndComp
Text Label 1200 1250 0    50   ~ 0
EN
Text Label 1200 1450 0    50   ~ 0
D13
Text Label 1200 1550 0    50   ~ 0
D12
Text Label 1200 1650 0    50   ~ 0
D11
Text Label 1200 1750 0    50   ~ 0
D10
Text Label 1200 1850 0    50   ~ 0
D9
Text Label 1200 1950 0    50   ~ 0
D6
Text Label 1200 2050 0    50   ~ 0
D5
Text Label 1200 2150 0    50   ~ 0
SCL
Text Label 1200 2250 0    50   ~ 0
SDA
Wire Notes Line
	500  3100 4100 3100
Text Notes 600  700  0    71   ~ 0
STM32 Adafruit Feather\n\n
$Comp
L PCBwBreakout-rescue:HEADER-1X5-PCBwBreakout-eagle-import JP?
U 1 1 5F60BB99
P 1750 4000
F 0 "JP?" H 1828 4053 59  0000 L CNN
F 1 "HEADER-1X5" H 1828 3948 59  0000 L CNN
F 2 "" H 1750 4000 71  0001 C CNN
F 3 "" H 1750 4000 71  0001 C CNN
	1    1750 4000
	1    0    0    -1  
$EndComp
Wire Wire Line
	1650 3800 1100 3800
Wire Wire Line
	1650 3900 1100 3900
Wire Wire Line
	1650 4000 1100 4000
Wire Wire Line
	1650 4100 1100 4100
Wire Wire Line
	1650 4200 1100 4200
Text Label 1200 3800 0    71   ~ 0
DIO1
Text Label 1200 3900 0    71   ~ 0
DIO2
Text Label 1200 4000 0    71   ~ 0
DIO3
Text Label 1200 4100 0    71   ~ 0
DIO4
Text Label 1200 4200 0    71   ~ 0
DIO5
$Comp
L PCBwBreakout-rescue:HEADER-1X9-PCBwBreakout-eagle-import JP?
U 1 1 5F613941
P 3300 3850
F 0 "JP?" H 3378 3903 59  0000 L CNN
F 1 "HEADER-1X9" H 3378 3798 59  0000 L CNN
F 2 "" H 3300 3850 71  0001 C CNN
F 3 "" H 3300 3850 71  0001 C CNN
	1    3300 3850
	1    0    0    -1  
$EndComp
$Comp
L PCBwBreakout-rescue:VIN-PCBwBreakout-eagle-import ?
U 1 1 5F61445D
P 2500 3450
F 0 "?" H 2550 3500 71  0001 C CNN
F 1 "VIN" V 2617 3413 42  0000 C CNN
F 2 "" H 2500 3450 71  0001 C CNN
F 3 "" H 2500 3450 71  0001 C CNN
	1    2500 3450
	0    -1   -1   0   
$EndComp
Wire Wire Line
	3200 3450 2600 3450
$Comp
L power:GND #PWR?
U 1 1 5F615E5F
P 2700 3550
F 0 "#PWR?" H 2700 3300 50  0001 C CNN
F 1 "GND" V 2705 3422 50  0000 R CNN
F 2 "" H 2700 3550 50  0001 C CNN
F 3 "" H 2700 3550 50  0001 C CNN
	1    2700 3550
	0    1    1    0   
$EndComp
Wire Wire Line
	3200 3550 2700 3550
Text Label 2800 3650 0    71   ~ 0
EN
Text Label 2750 3750 0    71   ~ 0
DIO0
Text Label 2650 3850 0    71   ~ 0
SCK_5V
Text Label 2600 3950 0    71   ~ 0
MISO_3V
Wire Wire Line
	2550 3950 3200 3950
Wire Wire Line
	2550 3850 3200 3850
Wire Wire Line
	2550 3750 3200 3750
Wire Wire Line
	2550 3650 3200 3650
Wire Wire Line
	2550 4050 3200 4050
Text Label 2600 4050 0    71   ~ 0
MOSI_5V
$Comp
L Device:R R?
U 1 1 5F622386
P 2500 4500
F 0 "R?" H 2570 4546 50  0000 L CNN
F 1 "100k" H 2570 4455 50  0000 L CNN
F 2 "" V 2430 4500 50  0001 C CNN
F 3 "~" H 2500 4500 50  0001 C CNN
	1    2500 4500
	1    0    0    -1  
$EndComp
$Comp
L Device:R R?
U 1 1 5F6265FE
P 2800 4500
F 0 "R?" H 2870 4546 50  0000 L CNN
F 1 "100k" H 2870 4455 50  0000 L CNN
F 2 "" V 2730 4500 50  0001 C CNN
F 3 "~" H 2800 4500 50  0001 C CNN
	1    2800 4500
	1    0    0    -1  
$EndComp
Wire Wire Line
	3200 4150 2500 4150
Wire Wire Line
	2500 4150 2500 4350
Wire Wire Line
	3200 4250 2800 4250
Wire Wire Line
	2800 4250 2800 4350
$Comp
L PCBwBreakout-rescue:VIN-PCBwBreakout-eagle-import ?
U 1 1 5F628E28
P 2500 4850
F 0 "?" H 2550 4900 71  0001 C CNN
F 1 "VIN" H 2422 4812 42  0000 R CNN
F 2 "" H 2500 4850 71  0001 C CNN
F 3 "" H 2500 4850 71  0001 C CNN
	1    2500 4850
	-1   0    0    1   
$EndComp
$Comp
L PCBwBreakout-rescue:VIN-PCBwBreakout-eagle-import U?
U 1 1 5F629B04
P 2800 4850
F 0 "U?" H 2850 4900 71  0001 C CNN
F 1 "VIN" H 2722 4812 42  0000 R CNN
F 2 "" H 2800 4850 71  0001 C CNN
F 3 "" H 2800 4850 71  0001 C CNN
	1    2800 4850
	-1   0    0    1   
$EndComp
Wire Wire Line
	2500 4650 2500 4750
Wire Wire Line
	2800 4650 2800 4750
Text Label 2650 4150 0    71   ~ 0
CS_5V
Text Label 2800 4250 0    71   ~ 0
RST_5V
Text Notes 550  3250 0    71   ~ 0
RFM69HCW\n
$Comp
L PCBwBreakout-eagle-import:3.3V ?
U 1 1 5F660521
P 2400 2500
F 0 "?" H 2450 2550 71  0001 C CNN
F 1 "3.3V" V 2517 2463 42  0000 C CNN
F 2 "" H 2400 2500 71  0001 C CNN
F 3 "" H 2400 2500 71  0001 C CNN
	1    2400 2500
	0    -1   -1   0   
$EndComp
Text Label 850  6200 0    71   ~ 0
~RESET~
Text Label 950  6100 0    71   ~ 0
SDA
Text Label 950  6000 0    71   ~ 0
SCL
Wire Wire Line
	1400 6200 800  6200
Wire Wire Line
	1400 6100 800  6100
Wire Wire Line
	1400 6000 800  6000
Wire Wire Line
	900  5900 1400 5900
$Comp
L power:GND #PWR?
U 1 1 5F665743
P 900 5900
F 0 "#PWR?" H 900 5650 50  0001 C CNN
F 1 "GND" V 905 5772 50  0000 R CNN
F 2 "" H 900 5900 50  0001 C CNN
F 3 "" H 900 5900 50  0001 C CNN
	1    900  5900
	0    1    1    0   
$EndComp
Wire Wire Line
	750  5800 1400 5800
$Comp
L PCBwBreakout-eagle-import:3.3V ?
U 1 1 5F65D5C2
P 650 5800
F 0 "?" H 700 5850 71  0001 C CNN
F 1 "3.3V" V 767 5763 42  0000 C CNN
F 2 "" H 650 5800 71  0001 C CNN
F 3 "" H 650 5800 71  0001 C CNN
	1    650  5800
	0    -1   -1   0   
$EndComp
Wire Wire Line
	850  5700 1400 5700
Wire Wire Line
	850  5600 850  5700
$Comp
L PCBwBreakout-eagle-import:VCC #P+?
U 1 1 5F658A43
P 850 5500
F 0 "#P+?" H 850 5500 71  0001 C CNN
F 1 "VCC" H 850 5622 59  0000 C CNN
F 2 "" H 850 5500 71  0001 C CNN
F 3 "" H 850 5500 71  0001 C CNN
	1    850  5500
	1    0    0    -1  
$EndComp
$Comp
L PCBwBreakout-eagle-import:HEADER-1X6 JP?
U 1 1 5F6558D8
P 1500 6000
F 0 "JP?" H 1578 6103 59  0000 L CNN
F 1 "HEADER-1X6" H 1578 5998 59  0000 L CNN
F 2 "" H 1500 6000 71  0001 C CNN
F 3 "" H 1500 6000 71  0001 C CNN
	1    1500 6000
	1    0    0    -1  
$EndComp
Wire Notes Line
	450  5150 4100 5150
$Comp
L PCBwBreakout-eagle-import:HEADER-1X6 JP?
U 1 1 5F675AA7
P 3300 6000
F 0 "JP?" H 3378 6103 59  0000 L CNN
F 1 "HEADER-1X6" H 3378 5998 59  0000 L CNN
F 2 "" H 3300 6000 71  0001 C CNN
F 3 "" H 3300 6000 71  0001 C CNN
	1    3300 6000
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5F677526
P 2500 5700
F 0 "#PWR?" H 2500 5450 50  0001 C CNN
F 1 "GND" V 2505 5572 50  0000 R CNN
F 2 "" H 2500 5700 50  0001 C CNN
F 3 "" H 2500 5700 50  0001 C CNN
	1    2500 5700
	0    1    1    0   
$EndComp
Wire Wire Line
	3200 5700 2500 5700
Wire Wire Line
	3200 5800 2500 5800
Wire Wire Line
	3200 5900 2500 5900
Wire Wire Line
	3200 6000 2500 6000
Wire Wire Line
	3200 6100 2500 6100
Wire Wire Line
	3200 6200 2500 6200
Text Label 2650 5800 0    71   ~ 0
1PPS
$Comp
L PCBwBreakout-eagle-import:VCC #P+?
U 1 1 5F68239E
P 2400 5900
F 0 "#P+?" H 2400 5900 71  0001 C CNN
F 1 "VCC" V 2400 5969 59  0000 L CNN
F 2 "" H 2400 5900 71  0001 C CNN
F 3 "" H 2400 5900 71  0001 C CNN
	1    2400 5900
	0    -1   -1   0   
$EndComp
Text Label 2700 6000 0    71   ~ 0
RXI
Text Label 2700 6100 0    71   ~ 0
TXO
Text Label 2600 6200 0    71   ~ 0
WAKEUP
Wire Notes Line
	450  6500 4100 6500
Wire Notes Line
	4100 500  4100 6500
Text Notes 500  5300 0    71   ~ 0
GPS \n
$EndSCHEMATC
