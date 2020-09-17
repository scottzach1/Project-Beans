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
NoConn ~ 7100 2950
NoConn ~ 7100 3200
$Comp
L avionics:MPL3115A2-Adafruit Barometer1
U 1 1 5F6344B6
P 7400 3850
F 0 "Barometer1" H 7778 4296 50  0000 L CNN
F 1 "MPL3115A2-Adafruit" H 7778 4205 50  0000 L CNN
F 2 "avionics:MPL3115A2-Adafruit" H 7450 3600 50  0001 C CNN
F 3 "" H 7400 3850 50  0001 C CNN
	1    7400 3850
	1    0    0    -1  
$EndComp
NoConn ~ 7550 3350
Text GLabel 5600 3150 2    50   Input ~ 0
SDA
Text GLabel 5600 3050 2    50   Input ~ 0
SCL
Text GLabel 7300 3750 0    50   Input ~ 0
SDA
Text GLabel 7300 3650 0    50   Input ~ 0
SCL
Text GLabel 4100 1950 0    50   Input ~ 0
GND
Text GLabel 7300 3150 0    50   Input ~ 0
3V3
Text GLabel 8050 2400 2    50   Input ~ 0
3V3
Text GLabel 8050 2700 2    50   Input ~ 0
GND
Text GLabel 7300 3250 0    50   Input ~ 0
GND
$Comp
L Switch:SW_Push SW1
U 1 1 5F65522E
P 4850 3900
F 0 "SW1" H 4850 4185 50  0000 C CNN
F 1 "SW_Push" H 4850 4094 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm" H 4850 4100 50  0001 C CNN
F 3 "~" H 4850 4100 50  0001 C CNN
	1    4850 3900
	1    0    0    -1  
$EndComp
Text GLabel 4100 1750 0    50   Input ~ 0
3V3
Text GLabel 4100 1850 0    50   Input ~ 0
3V3
$Comp
L avionics:Adafruit_Feather_STM32F405 STM32
U 1 1 5F62EEAA
P 4850 2400
F 0 "STM32" H 4850 3515 50  0000 C CNN
F 1 "Adafruit_Feather_STM32F405" H 4850 3424 50  0000 C CNN
F 2 "avionics:Adafruit_Feather_STM32F405" H 4850 2300 50  0001 C CNN
F 3 "" H 4850 2200 50  0001 C CNN
	1    4850 2400
	1    0    0    -1  
$EndComp
Text GLabel 5200 3900 2    50   Input ~ 0
3V3
Text GLabel 4500 3900 0    50   Input ~ 0
Boot
Text GLabel 4100 3150 0    50   Input ~ 0
Boot
Wire Wire Line
	4500 3900 4650 3900
Wire Wire Line
	5050 3900 5200 3900
Text GLabel 6800 1200 0    50   Input ~ 0
GND
Text GLabel 6800 1000 0    50   Input ~ 0
3V3
Text GLabel 6800 1300 0    50   Input ~ 0
SCL
Text GLabel 6800 1400 0    50   Input ~ 0
SDA
$Comp
L avionics:RFM98 LoRa_Radio1
U 1 1 5F636F5E
P 7550 2450
F 0 "LoRa_Radio1" H 7550 3065 50  0000 C CNN
F 1 "RFM98" H 7550 2974 50  0000 C CNN
F 2 "avionics:RFM98" H 7550 1900 50  0001 C CNN
F 3 "" H 7550 2450 50  0001 C CNN
	1    7550 2450
	1    0    0    -1  
$EndComp
NoConn ~ 7350 1900
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
$EndSCHEMATC
