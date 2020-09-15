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
L PCBwBreakout-eagle-import:HEADER-1X12 JP?
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
L PCBwBreakout-eagle-import:HEADER-1X16 JP?
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
Text Label 2600 2500 0    50   ~ 0
+3V3
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
L PCBwBreakout-eagle-import:VBAT ?
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
L PCBwBreakout-eagle-import:VBUS ?
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
Wire Notes Line
	4100 3100 4100 500 
Text Notes 600  600  0    71   ~ 0
Feather Headers\n
$EndSCHEMATC
