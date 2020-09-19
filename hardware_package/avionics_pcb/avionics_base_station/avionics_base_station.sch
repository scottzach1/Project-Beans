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
L avionics:NODEMCU U1
U 1 1 5F655ACC
P 2050 2150
F 0 "U1" H 2050 3165 50  0000 C CNN
F 1 "NODEMCU" H 2050 3074 50  0000 C CNN
F 2 "avionics:NODEMCU" H 2050 2150 50  0001 C CNN
F 3 "" H 2050 2150 50  0001 C CNN
	1    2050 2150
	1    0    0    -1  
$EndComp
$Comp
L avionics:RFM98 U2
U 1 1 5F65755F
P 3800 2450
F 0 "U2" H 3800 3065 50  0000 C CNN
F 1 "RFM98" H 3800 2974 50  0000 C CNN
F 2 "avionics:RFM98" H 3800 1900 50  0001 C CNN
F 3 "" H 3800 2450 50  0001 C CNN
	1    3800 2450
	1    0    0    -1  
$EndComp
Text GLabel 2550 2800 2    50   Input ~ 0
3V3
Text GLabel 4300 2400 2    50   Input ~ 0
3V3
Text GLabel 2550 2700 2    50   Input ~ 0
GND
Text GLabel 4300 2700 2    50   Input ~ 0
GND
Text GLabel 3300 2100 0    50   Input ~ 0
GND
Text GLabel 3300 2800 0    50   Input ~ 0
GND
$Comp
L Connector:Conn_01x01_Male J?
U 1 1 5F65C25B
P 4750 2800
F 0 "J?" H 4722 2732 50  0000 R CNN
F 1 "Conn_01x01_Male" H 4722 2823 50  0000 R CNN
F 2 "" H 4750 2800 50  0001 C CNN
F 3 "~" H 4750 2800 50  0001 C CNN
	1    4750 2800
	-1   0    0    1   
$EndComp
$EndSCHEMATC
