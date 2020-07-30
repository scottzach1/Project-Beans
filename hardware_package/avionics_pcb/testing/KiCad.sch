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
L Device:R R1
U 1 1 5EEB676C
P 3200 2700
F 0 "R1" V 2993 2700 50  0000 C CNN
F 1 "100" V 3100 2700 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 3130 2700 50  0001 C CNN
F 3 "~" H 3200 2700 50  0001 C CNN
	1    3200 2700
	0    1    1    0   
$EndComp
Wire Wire Line
	3350 2700 3550 2700
Wire Wire Line
	3750 2100 3550 2100
Wire Wire Line
	3550 2100 3550 2700
Connection ~ 3550 2700
Wire Wire Line
	3550 2700 3700 2700
Wire Wire Line
	4700 2100 4700 2800
Wire Wire Line
	4700 2800 4300 2800
Wire Wire Line
	3700 2900 3550 2900
Wire Wire Line
	3550 2900 3550 3050
$Comp
L power:GND #PWR0101
U 1 1 5EEBE107
P 3550 3050
F 0 "#PWR0101" H 3550 2800 50  0001 C CNN
F 1 "GND" H 3555 2877 50  0000 C CNN
F 2 "" H 3550 3050 50  0001 C CNN
F 3 "" H 3550 3050 50  0001 C CNN
	1    3550 3050
	1    0    0    -1  
$EndComp
Wire Wire Line
	2650 2700 3050 2700
Wire Wire Line
	4700 2800 5100 2800
Connection ~ 4700 2800
$Comp
L Connector_Generic:Conn_01x04 J1
U 1 1 5EEC02F3
P 2800 2000
F 0 "J1" V 2672 2180 50  0000 L CNN
F 1 "Conn_01x04" V 2763 2180 50  0000 L CNN
F 2 "Connector_JST:JST_EH_B4B-EH-A_1x04_P2.50mm_Vertical" H 2800 2000 50  0001 C CNN
F 3 "~" H 2800 2000 50  0001 C CNN
	1    2800 2000
	0    1    1    0   
$EndComp
Text GLabel 2700 1800 1    50   Input ~ 0
+5V
Text GLabel 2800 1800 1    50   Input ~ 0
-5V
Text GLabel 3900 2500 1    50   Input ~ 0
-5V
Text GLabel 3900 3100 3    50   Input ~ 0
+5V
Wire Wire Line
	4050 2100 4700 2100
$Comp
L Device:C C1
U 1 1 5EEBC28A
P 3900 2100
F 0 "C1" V 3648 2100 50  0000 C CNN
F 1 "C" V 3739 2100 50  0000 C CNN
F 2 "Capacitor_SMD:C_1206_3216Metric_Pad1.42x1.75mm_HandSolder" H 3938 1950 50  0001 C CNN
F 3 "~" H 3900 2100 50  0001 C CNN
	1    3900 2100
	0    1    1    0   
$EndComp
Text GLabel 2600 1800 1    50   Input ~ 0
V_in
Text GLabel 2900 1800 1    50   Input ~ 0
V_out
Text GLabel 2650 2700 0    50   Input ~ 0
V_in
Text GLabel 5100 2800 2    50   Input ~ 0
V_out
$Comp
L Amplifier_Operational:AD8603 U1
U 1 1 5EECCE36
P 4000 2800
F 0 "U1" H 4000 2319 50  0000 C CNN
F 1 "AD8603" H 4000 2410 50  0000 C CNN
F 2 "Package_TO_SOT_SMD:TSOT-23-5" H 4000 2800 50  0001 C CNN
F 3 "https://www.analog.com/media/en/technical-documentation/data-sheets/AD8603_8607_8609.pdf" H 4000 3000 50  0001 C CNN
	1    4000 2800
	1    0    0    1   
$EndComp
$EndSCHEMATC