EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A3 16535 11693
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
L Device:Ferrite_Bead FB1
U 1 1 5F2CCE72
P 8050 1000
F 0 "FB1" V 7776 1000 50  0000 C CNN
F 1 "Ferrite_Bead" V 7867 1000 50  0000 C CNN
F 2 "Resistor_SMD:R_0402_1005Metric" V 7980 1000 50  0001 C CNN
F 3 "~" H 8050 1000 50  0001 C CNN
	1    8050 1000
	0    1    1    0   
$EndComp
$Comp
L Device:C C8
U 1 1 5F2CE03B
P 7850 1400
F 0 "C8" V 8102 1400 50  0000 C CNN
F 1 "0.1uF" V 8011 1400 50  0000 C CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 7888 1250 50  0001 C CNN
F 3 "~" H 7850 1400 50  0001 C CNN
	1    7850 1400
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR025
U 1 1 5F2D33EA
P 8450 1900
F 0 "#PWR025" H 8450 1650 50  0001 C CNN
F 1 "GND" H 8455 1727 50  0000 C CNN
F 2 "" H 8450 1900 50  0001 C CNN
F 3 "" H 8450 1900 50  0001 C CNN
	1    8450 1900
	1    0    0    -1  
$EndComp
$Comp
L Device:C C9
U 1 1 5F2D49C9
P 7850 1800
F 0 "C9" V 8102 1800 50  0000 C CNN
F 1 "10uF" V 8011 1800 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 7888 1650 50  0001 C CNN
F 3 "~" H 7850 1800 50  0001 C CNN
	1    7850 1800
	0    -1   -1   0   
$EndComp
Wire Wire Line
	8000 1800 8450 1800
Wire Wire Line
	8450 1800 8450 1900
Wire Wire Line
	8000 1400 8450 1400
Wire Wire Line
	8450 1400 8450 1800
Connection ~ 8450 1800
Wire Wire Line
	7550 1400 7550 1800
Wire Wire Line
	7550 1800 7700 1800
Connection ~ 7550 1400
Wire Wire Line
	7550 1400 7700 1400
Wire Wire Line
	7550 1400 7550 1000
Wire Wire Line
	7550 1000 7900 1000
Wire Wire Line
	6750 1700 6850 1700
Connection ~ 6950 1700
Wire Wire Line
	6950 1700 7050 1700
Connection ~ 6850 1700
$Comp
L Device:C C5
U 1 1 5F2E2889
P 5400 2000
F 0 "C5" V 5652 2000 50  0000 C CNN
F 1 "0.1uF" V 5561 2000 50  0000 C CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 5438 1850 50  0001 C CNN
F 3 "~" H 5400 2000 50  0001 C CNN
	1    5400 2000
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR012
U 1 1 5F2E4F02
P 5000 2250
F 0 "#PWR012" H 5000 2000 50  0001 C CNN
F 1 "GND" H 5005 2077 50  0000 C CNN
F 2 "" H 5000 2250 50  0001 C CNN
F 3 "" H 5000 2250 50  0001 C CNN
	1    5000 2250
	1    0    0    -1  
$EndComp
$Comp
L Device:R R4
U 1 1 5F2E6EE5
P 5650 2200
F 0 "R4" V 5550 2200 50  0000 C CNN
F 1 "100k" V 5750 2200 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 5580 2200 50  0001 C CNN
F 3 "~" H 5650 2200 50  0001 C CNN
	1    5650 2200
	0    1    1    0   
$EndComp
Wire Wire Line
	5000 2000 5250 2000
Wire Wire Line
	5500 2200 5000 2200
Text Label 5850 2200 0    50   ~ 0
BOOT0
Text Notes 7950 2450 0    50   ~ 0
DACs
$Comp
L Switch:SW_Push SW1
U 1 1 5F3F19FC
P 1350 4300
F 0 "SW1" H 1350 4585 50  0000 C CNN
F 1 "SW_Push" H 1350 4494 50  0000 C CNN
F 2 "Button_Switch_SMD:SW_Push_SPST_NO_Alps_SKRK" H 1350 4500 50  0001 C CNN
F 3 "~" H 1350 4500 50  0001 C CNN
	1    1350 4300
	1    0    0    -1  
$EndComp
Wire Wire Line
	1550 4300 1900 4300
Wire Wire Line
	1150 4300 900  4300
$Comp
L power:GND #PWR06
U 1 1 5F401578
P 900 4300
F 0 "#PWR06" H 900 4050 50  0001 C CNN
F 1 "GND" V 905 4172 50  0000 R CNN
F 2 "" H 900 4300 50  0001 C CNN
F 3 "" H 900 4300 50  0001 C CNN
	1    900  4300
	0    1    1    0   
$EndComp
Text Notes 1650 4550 2    50   ~ 0
RESET BUTTON\n\n
$Comp
L Connector:Conn_01x03_Female J3
U 1 1 5F51AC89
P 14100 2650
F 0 "J3" H 14300 2500 50  0000 C CNN
F 1 "Conn_01x03_Female" H 14500 2600 50  0000 C CNN
F 2 "Connector_JST:JST_XH_B3B-XH-A_1x03_P2.50mm_Vertical" H 14100 2650 50  0001 C CNN
F 3 "~" H 14100 2650 50  0001 C CNN
	1    14100 2650
	-1   0    0    1   
$EndComp
Wire Wire Line
	14300 2750 14450 2750
Wire Wire Line
	14450 2750 14450 2900
$Comp
L power:GND #PWR059
U 1 1 5F539522
P 14450 2950
F 0 "#PWR059" H 14450 2700 50  0001 C CNN
F 1 "GND" H 14455 2777 50  0000 C CNN
F 2 "" H 14450 2950 50  0001 C CNN
F 3 "" H 14450 2950 50  0001 C CNN
	1    14450 2950
	1    0    0    -1  
$EndComp
$Comp
L Device:C C20
U 1 1 5F5456DC
P 14150 4350
F 0 "C20" H 14265 4396 50  0000 L CNN
F 1 "10uF" H 14265 4305 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 14188 4200 50  0001 C CNN
F 3 "~" H 14150 4350 50  0001 C CNN
	1    14150 4350
	1    0    0    -1  
$EndComp
$Comp
L Device:C C21
U 1 1 5F546886
P 14500 4350
F 0 "C21" H 14615 4396 50  0000 L CNN
F 1 "1uF" H 14615 4305 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 14538 4200 50  0001 C CNN
F 3 "~" H 14500 4350 50  0001 C CNN
	1    14500 4350
	1    0    0    -1  
$EndComp
$Comp
L Device:C C23
U 1 1 5F546C78
P 14850 4350
F 0 "C23" H 14965 4396 50  0000 L CNN
F 1 "1uF" H 14965 4305 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 14888 4200 50  0001 C CNN
F 3 "~" H 14850 4350 50  0001 C CNN
	1    14850 4350
	1    0    0    -1  
$EndComp
$Comp
L Device:C C26
U 1 1 5F547069
P 15200 4350
F 0 "C26" H 15315 4396 50  0000 L CNN
F 1 "1uF" H 15315 4305 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 15238 4200 50  0001 C CNN
F 3 "~" H 15200 4350 50  0001 C CNN
	1    15200 4350
	1    0    0    -1  
$EndComp
$Comp
L Device:C C27
U 1 1 5F547429
P 15550 4350
F 0 "C27" H 15665 4396 50  0000 L CNN
F 1 "1uF" H 15665 4305 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 15588 4200 50  0001 C CNN
F 3 "~" H 15550 4350 50  0001 C CNN
	1    15550 4350
	1    0    0    -1  
$EndComp
$Comp
L Device:C C19
U 1 1 5F54789E
P 13800 4350
F 0 "C19" H 13915 4396 50  0000 L CNN
F 1 "1uF" H 13915 4305 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 13838 4200 50  0001 C CNN
F 3 "~" H 13800 4350 50  0001 C CNN
	1    13800 4350
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR057
U 1 1 5F54898C
P 14650 4700
F 0 "#PWR057" H 14650 4450 50  0001 C CNN
F 1 "GND" H 14655 4527 50  0000 C CNN
F 2 "" H 14650 4700 50  0001 C CNN
F 3 "" H 14650 4700 50  0001 C CNN
	1    14650 4700
	1    0    0    -1  
$EndComp
Wire Wire Line
	13800 4100 13800 4200
Wire Wire Line
	14150 4100 14150 4200
Connection ~ 14150 4100
Wire Wire Line
	14150 4100 13800 4100
Wire Wire Line
	14500 4100 14500 4200
Connection ~ 14500 4100
Wire Wire Line
	14500 4100 14150 4100
Wire Wire Line
	14850 4200 14850 4100
Wire Wire Line
	14850 4100 15200 4100
Wire Wire Line
	15200 4100 15200 4200
Connection ~ 14850 4100
Wire Wire Line
	15200 4100 15550 4100
Wire Wire Line
	15550 4100 15550 4200
Connection ~ 15200 4100
Wire Wire Line
	13800 4500 13800 4600
Wire Wire Line
	13800 4600 14150 4600
Wire Wire Line
	15550 4600 15550 4500
Wire Wire Line
	15200 4500 15200 4600
Connection ~ 15200 4600
Wire Wire Line
	15200 4600 15550 4600
Wire Wire Line
	14850 4500 14850 4600
Connection ~ 14850 4600
Wire Wire Line
	14850 4600 15200 4600
Wire Wire Line
	14500 4500 14500 4600
Connection ~ 14500 4600
Wire Wire Line
	14500 4600 14650 4600
Wire Wire Line
	14150 4500 14150 4600
Connection ~ 14150 4600
Wire Wire Line
	14150 4600 14500 4600
Wire Wire Line
	14650 4600 14650 4700
Connection ~ 14650 4600
Wire Wire Line
	14650 4600 14850 4600
Wire Wire Line
	14500 4100 14650 4100
Wire Wire Line
	14650 4000 14650 4100
Connection ~ 14650 4100
Wire Wire Line
	14650 4100 14850 4100
Text Notes 14150 2350 2    50   ~ 0
JST Battery Connector\n
Text Notes 2750 650  0    71   ~ 0
USB-C Connector\n
Text Notes 13250 10950 2    59   ~ 12
Rocket PCB Schematic\n
Text Notes 13700 11050 2    59   ~ 12
3/8/2020\n
Text Notes 15650 11050 2    59   ~ 12
1.0\n
Text Notes 9400 650  0    67   ~ 0
IMU\n
Wire Wire Line
	7050 1700 7050 1800
Wire Wire Line
	6950 1800 6950 1700
Wire Wire Line
	6850 1800 6850 1700
Wire Wire Line
	6750 1800 6750 1700
Wire Wire Line
	7550 2600 7850 2600
Wire Wire Line
	7550 2500 7850 2500
Wire Wire Line
	7550 2400 7850 2400
Wire Wire Line
	7550 2300 7850 2300
Wire Wire Line
	6150 2000 6050 2000
Wire Wire Line
	6150 2200 5800 2200
Wire Wire Line
	8800 4800 8800 4600
Text Label 7850 4400 2    50   ~ 0
SDA
Text Label 7850 4500 2    50   ~ 0
D9
Text Label 7850 4600 2    50   ~ 0
D10
Text Label 7850 4700 2    50   ~ 0
TX_D1
Text Label 7850 4800 2    50   ~ 0
RX_D0
Text Label 8000 4900 2    50   ~ 0
SD_DETECT
Text Label 7850 5000 2    50   ~ 0
SCK
Text Label 7850 5100 2    50   ~ 0
MISO
Text Notes 8200 5000 3    50   ~ 0
SPI2\n
Text Notes 8350 4800 2    50   ~ 0
USART3\n
$Comp
L Device:R R7
U 1 1 5F3761B7
P 8500 4800
F 0 "R7" V 8450 5000 50  0000 C CNN
F 1 "100k" V 8600 4800 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 8430 4800 50  0001 C CNN
F 3 "~" H 8500 4800 50  0001 C CNN
	1    8500 4800
	0    1    1    0   
$EndComp
Wire Wire Line
	8650 4800 8800 4800
Text Notes 8500 4700 2    50   ~ 0
J2S2_BCLK\n
Text Notes 8450 4600 2    50   ~ 0
J2S2_WS\n
Text Notes 8100 4500 3    50   ~ 0
CAN\n
Wire Wire Line
	7550 4600 8000 4600
Wire Wire Line
	7550 4500 8000 4500
Wire Wire Line
	7550 4400 8000 4400
Wire Wire Line
	7550 5000 8000 5000
Wire Wire Line
	7550 4900 8000 4900
Wire Wire Line
	7550 4800 8350 4800
Wire Wire Line
	7550 4700 8000 4700
Wire Wire Line
	7650 3000 7550 3000
Wire Wire Line
	7550 3100 7800 3100
Wire Wire Line
	7550 3200 7800 3200
Wire Wire Line
	7550 3300 8100 3300
Wire Wire Line
	7550 3400 8100 3400
Wire Wire Line
	7550 3500 7800 3500
Wire Wire Line
	7550 2700 7850 2700
Wire Wire Line
	7550 2900 7650 2900
Wire Wire Line
	7550 5100 8000 5100
Wire Wire Line
	7550 5200 8000 5200
Wire Wire Line
	7550 3900 7850 3900
Wire Wire Line
	7550 4000 8150 4000
Wire Wire Line
	7550 4100 8150 4100
Wire Wire Line
	7550 4200 8150 4200
Wire Wire Line
	7550 4300 8000 4300
Wire Wire Line
	6150 3800 5800 3800
Wire Wire Line
	6150 4700 5800 4700
Wire Wire Line
	6150 4800 5800 4800
Wire Wire Line
	6150 4900 5800 4900
Wire Wire Line
	6150 3900 5800 3900
Wire Wire Line
	6150 4000 5800 4000
Wire Wire Line
	6150 4100 5800 4100
Wire Wire Line
	6150 4200 5800 4200
Wire Wire Line
	6150 4300 5800 4300
Wire Wire Line
	6150 4400 5800 4400
Wire Wire Line
	6150 4500 5800 4500
Wire Wire Line
	6150 4600 5800 4600
Wire Wire Line
	6150 3500 5800 3500
Wire Wire Line
	6750 5400 6750 5500
Wire Wire Line
	6850 5400 6850 5500
Wire Wire Line
	6950 5400 6950 5500
$Comp
L power:GND #PWR022
U 1 1 5F2FC07E
P 7850 3900
F 0 "#PWR022" H 7850 3650 50  0001 C CNN
F 1 "GND" V 7855 3772 50  0000 R CNN
F 2 "" H 7850 3900 50  0001 C CNN
F 3 "" H 7850 3900 50  0001 C CNN
	1    7850 3900
	0    -1   -1   0   
$EndComp
Text Label 8050 4000 2    50   ~ 0
FLASH_SCK
$Comp
L power:GND #PWR026
U 1 1 5F303D86
P 8600 4050
F 0 "#PWR026" H 8600 3800 50  0001 C CNN
F 1 "GND" H 8605 3877 50  0000 C CNN
F 2 "" H 8600 4050 50  0001 C CNN
F 3 "" H 8600 4050 50  0001 C CNN
	1    8600 4050
	-1   0    0    1   
$EndComp
Text Notes 8500 3950 3    50   ~ 0
SPI1\n
Text Notes 5200 600  2    59   ~ 0
STM32F405 MicroProcessor\n
Wire Wire Line
	5450 3000 5650 3000
Connection ~ 5450 3000
Text Notes 6800 4050 2    50   ~ 0
J2S2_SD\n
Wire Wire Line
	5200 3000 5450 3000
Text Notes 6850 3950 2    50   ~ 0
J2S2ext_SD\n
Text Label 6150 3500 2    50   ~ 0
SDIO_CMD
Text Label 6150 4900 2    50   ~ 0
SDIO_CLK
Text Label 6150 4800 2    50   ~ 0
SDIO_D3
Text Label 6150 4700 2    50   ~ 0
SDIO_D2
Text Label 6150 4600 2    50   ~ 0
SDIO_D0
Text Label 6150 4500 2    50   ~ 0
SDIO_D1
Text Label 6000 4400 2    50   ~ 0
D5
Text Label 6000 4300 2    50   ~ 0
D6
Text Label 6000 4200 2    50   ~ 0
A5
Text Label 6000 4100 2    50   ~ 0
A4
Text Label 6050 4000 2    50   ~ 0
D11
Text Label 6050 3900 2    50   ~ 0
D12
Text Label 6050 3800 2    50   ~ 0
D13
Text Label 7850 5200 2    50   ~ 0
MOSI
Text Label 7850 4300 2    50   ~ 0
SCL
Text Label 8100 4200 2    50   ~ 0
FLASH_MOSI
Wire Wire Line
	8450 4200 8600 4200
$Comp
L Device:R R6
U 1 1 5F302BB2
P 8300 4200
F 0 "R6" V 8200 4200 50  0000 C CNN
F 1 "100k" V 8400 4200 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 8230 4200 50  0001 C CNN
F 3 "~" H 8300 4200 50  0001 C CNN
	1    8300 4200
	0    1    1    0   
$EndComp
Text Label 8100 4100 2    50   ~ 0
FLASH_MISO
Text Label 8050 3400 2    50   ~ 0
SWCLK
Text Label 8050 3300 2    50   ~ 0
SWDIO
Text Label 7700 3200 0    50   ~ 0
D+
Text Label 7700 3100 0    50   ~ 0
D-
Connection ~ 7650 2900
Wire Wire Line
	7650 2900 7850 2900
Wire Wire Line
	7650 2900 7650 3000
Wire Wire Line
	6850 5500 6950 5500
Connection ~ 6850 5500
Wire Wire Line
	6950 5500 6950 5600
Connection ~ 6950 5500
Wire Wire Line
	6750 5500 6850 5500
$Comp
L power:GND #PWR019
U 1 1 5F2DD70B
P 6950 5600
F 0 "#PWR019" H 6950 5350 50  0001 C CNN
F 1 "GND" H 6955 5427 50  0000 C CNN
F 2 "" H 6950 5600 50  0001 C CNN
F 3 "" H 6950 5600 50  0001 C CNN
	1    6950 5600
	1    0    0    -1  
$EndComp
Wire Wire Line
	5650 2900 5650 3000
Wire Wire Line
	5200 2900 5200 3000
$Comp
L Device:C C6
U 1 1 5F2DAF4E
P 5650 2750
F 0 "C6" H 5765 2796 50  0000 L CNN
F 1 "10uF" H 5765 2705 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 5688 2600 50  0001 C CNN
F 3 "~" H 5650 2750 50  0001 C CNN
	1    5650 2750
	1    0    0    -1  
$EndComp
$Comp
L Device:C C4
U 1 1 5F2D91A1
P 5200 2750
F 0 "C4" H 5315 2796 50  0000 L CNN
F 1 "10uF" H 5315 2705 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 5238 2600 50  0001 C CNN
F 3 "~" H 5200 2750 50  0001 C CNN
	1    5200 2750
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR015
U 1 1 5F2D8268
P 5450 3000
F 0 "#PWR015" H 5450 2750 50  0001 C CNN
F 1 "GND" H 5300 2950 50  0000 C CNN
F 2 "" H 5450 3000 50  0001 C CNN
F 3 "" H 5450 3000 50  0001 C CNN
	1    5450 3000
	1    0    0    -1  
$EndComp
Wire Wire Line
	5000 2000 5000 2200
Connection ~ 5000 2200
Wire Wire Line
	5000 2200 5000 2250
Wire Notes Line
	11800 9950 11800 8050
Text Label 10000 1700 0    59   ~ 0
SCL
Text Label 10000 1800 0    59   ~ 0
SDA
Wire Notes Line
	12650 2200 16050 2200
Wire Notes Line
	12650 5000 16050 5000
Wire Notes Line
	3850 450  3850 6450
Wire Notes Line
	3850 6450 9300 6450
Wire Notes Line
	9300 3150 12650 3150
Wire Notes Line
	9300 5650 12650 5650
Wire Notes Line
	12650 500  12650 8050
Text Notes 8100 4400 1    50   ~ 0
I2C1
$Comp
L Device:R R5
U 1 1 5F74312C
P 5650 3800
F 0 "R5" V 5600 4000 50  0000 C CNN
F 1 "2.2k" V 5750 3800 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 5580 3800 50  0001 C CNN
F 3 "~" H 5650 3800 50  0001 C CNN
	1    5650 3800
	0    1    1    0   
$EndComp
$Comp
L Device:LED D1
U 1 1 5F749A4A
P 5350 3800
F 0 "D1" H 5343 4017 50  0000 C CNN
F 1 "LED" H 5343 3926 50  0000 C CNN
F 2 "LED_SMD:LED_0603_1608Metric_Pad1.05x0.95mm_HandSolder" H 5350 3800 50  0001 C CNN
F 3 "~" H 5350 3800 50  0001 C CNN
	1    5350 3800
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR014
U 1 1 5F74AD18
P 5200 3800
F 0 "#PWR014" H 5200 3550 50  0001 C CNN
F 1 "GND" H 5205 3627 50  0000 C CNN
F 2 "" H 5200 3800 50  0001 C CNN
F 3 "" H 5200 3800 50  0001 C CNN
	1    5200 3800
	0    1    1    0   
$EndComp
$Comp
L Connector:Micro_SD_Card J2
U 1 1 5F800B5E
P 2750 9950
F 0 "J2" H 2700 10667 50  0000 C CNN
F 1 "Micro_SD_Card" H 2700 10576 50  0000 C CNN
F 2 "Connector_Card:microSD_HC_Hirose_DM3BT-DSF-PEJS" H 3900 10250 50  0001 C CNN
F 3 "http://katalog.we-online.de/em/datasheet/693072010801.pdf" H 2750 9950 50  0001 C CNN
	1    2750 9950
	1    0    0    -1  
$EndComp
Wire Wire Line
	1850 9650 1200 9650
$Comp
L Device:R R1
U 1 1 5F85C352
P 1400 9750
F 0 "R1" V 1193 9750 50  0000 C CNN
F 1 "10k" V 1284 9750 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 1330 9750 50  0001 C CNN
F 3 "~" H 1400 9750 50  0001 C CNN
	1    1400 9750
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR02
U 1 1 5F872784
P 1200 9650
F 0 "#PWR02" H 1200 9400 50  0001 C CNN
F 1 "GND" V 1205 9522 50  0000 R CNN
F 2 "" H 1200 9650 50  0001 C CNN
F 3 "" H 1200 9650 50  0001 C CNN
	1    1200 9650
	0    1    1    0   
$EndComp
Wire Wire Line
	1850 10050 1350 10050
Text Label 1400 10050 0    50   ~ 0
SDIO_CLK
$Comp
L power:GND #PWR05
U 1 1 5F89EF1A
P 1200 10150
F 0 "#PWR05" H 1200 9900 50  0001 C CNN
F 1 "GND" V 1205 10022 50  0000 R CNN
F 2 "" H 1200 10150 50  0001 C CNN
F 3 "" H 1200 10150 50  0001 C CNN
	1    1200 10150
	0    1    1    0   
$EndComp
Wire Wire Line
	1850 10250 1350 10250
Text Label 1400 10250 0    50   ~ 0
SDIO_D0
Text Label 1400 10350 0    50   ~ 0
SDIO_D1
Text Label 1400 9850 0    50   ~ 0
SDIO_CMD
Wire Wire Line
	1550 9750 1850 9750
Text Label 1550 9750 0    50   ~ 0
SDIO_D3
Wire Wire Line
	1850 9850 1350 9850
Wire Wire Line
	1250 9750 1200 9750
Wire Wire Line
	1200 10150 1850 10150
Wire Wire Line
	14300 2550 14750 2550
Wire Wire Line
	7550 3700 8000 3700
$Comp
L power:GND #PWR030
U 1 1 5F6AEB87
P 9900 1600
F 0 "#PWR030" H 9900 1350 50  0001 C CNN
F 1 "GND" H 9905 1427 50  0000 C CNN
F 2 "" H 9900 1600 50  0001 C CNN
F 3 "" H 9900 1600 50  0001 C CNN
	1    9900 1600
	0    1    1    0   
$EndComp
Wire Notes Line
	3950 8600 3950 11200
Text Notes 550  8750 0    71   ~ 0
microSD card port
$Comp
L RocketPCB-rescue:MPL3115A2-Sensor_Pressure U7
U 1 1 5F6F2546
P 14400 6400
F 0 "U7" H 14050 5900 50  0000 C CNN
F 1 "MPL3115A2" H 14050 5800 50  0000 C CNN
F 2 "Package_LGA:NXP_LGA-8_3x5mm_P1.25mm_H1.1mm" H 15400 5950 50  0001 C CNN
F 3 "https://www.nxp.com/docs/en/data-sheet/MPL3115A2.pdf" H 14400 6400 50  0001 C CNN
	1    14400 6400
	1    0    0    -1  
$EndComp
Wire Wire Line
	14400 5750 14400 5900
Wire Wire Line
	14000 6400 13600 6400
Wire Wire Line
	14000 6300 13600 6300
Text Label 13700 6300 0    71   ~ 0
SDA
Text Label 13700 6400 0    71   ~ 0
SCL
Wire Wire Line
	14400 6900 14400 7050
$Comp
L power:GND #PWR055
U 1 1 5F76D8E9
P 14400 7050
F 0 "#PWR055" H 14400 6800 50  0001 C CNN
F 1 "GND" H 14405 6877 50  0000 C CNN
F 2 "" H 14400 7050 50  0001 C CNN
F 3 "" H 14400 7050 50  0001 C CNN
	1    14400 7050
	1    0    0    -1  
$EndComp
Wire Wire Line
	14800 6600 15050 6600
Wire Wire Line
	15050 6600 15050 6800
$Comp
L Device:C C24
U 1 1 5F78545C
P 15050 6950
F 0 "C24" H 15165 6996 50  0000 L CNN
F 1 "100nF" H 15165 6905 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 15088 6800 50  0001 C CNN
F 3 "~" H 15050 6950 50  0001 C CNN
	1    15050 6950
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR060
U 1 1 5F785A3F
P 15050 7100
F 0 "#PWR060" H 15050 6850 50  0001 C CNN
F 1 "GND" H 15055 6927 50  0000 C CNN
F 2 "" H 15050 7100 50  0001 C CNN
F 3 "" H 15050 7100 50  0001 C CNN
	1    15050 7100
	1    0    0    -1  
$EndComp
$Comp
L Device:C C18
U 1 1 5F786096
P 13650 5800
F 0 "C18" H 13765 5846 50  0000 L CNN
F 1 "100nF" H 13765 5755 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 13688 5650 50  0001 C CNN
F 3 "~" H 13650 5800 50  0001 C CNN
	1    13650 5800
	1    0    0    -1  
$EndComp
$Comp
L Device:C C15
U 1 1 5F787168
P 13200 5800
F 0 "C15" H 13315 5846 50  0000 L CNN
F 1 "10uF" H 13315 5755 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 13238 5650 50  0001 C CNN
F 3 "~" H 13200 5800 50  0001 C CNN
	1    13200 5800
	1    0    0    -1  
$EndComp
Wire Wire Line
	14300 5500 13650 5500
Wire Wire Line
	13650 5500 13650 5650
Wire Wire Line
	14300 5500 14300 5750
Wire Wire Line
	13650 5500 13200 5500
Wire Wire Line
	13200 5500 13200 5650
Connection ~ 13650 5500
Wire Wire Line
	13200 5950 13200 6050
Wire Wire Line
	13200 6050 13650 6050
Wire Wire Line
	13650 6050 13650 5950
Wire Wire Line
	13200 6050 13200 6150
Connection ~ 13200 6050
$Comp
L power:GND #PWR046
U 1 1 5F7E572C
P 13200 6150
F 0 "#PWR046" H 13200 5900 50  0001 C CNN
F 1 "GND" H 13205 5977 50  0000 C CNN
F 2 "" H 13200 6150 50  0001 C CNN
F 3 "" H 13200 6150 50  0001 C CNN
	1    13200 6150
	1    0    0    -1  
$EndComp
Wire Wire Line
	14800 6300 15250 6300
Wire Wire Line
	14800 6400 15250 6400
Text Notes 12750 5150 0    71   ~ 0
Barometer\n
$Comp
L Switch:SW_Push SW2
U 1 1 5F878647
P 1350 4900
F 0 "SW2" H 1350 5185 50  0000 C CNN
F 1 "SW_Push" H 1350 5094 50  0000 C CNN
F 2 "Button_Switch_SMD:SW_Push_SPST_NO_Alps_SKRK" H 1350 5100 50  0001 C CNN
F 3 "~" H 1350 5100 50  0001 C CNN
	1    1350 4900
	1    0    0    -1  
$EndComp
Wire Wire Line
	1550 4900 1900 4900
Wire Wire Line
	1150 4900 800  4900
$Comp
L power:GND #PWR01
U 1 1 5F8C15A9
P 800 4900
F 0 "#PWR01" H 800 4650 50  0001 C CNN
F 1 "GND" V 805 4772 50  0000 R CNN
F 2 "" H 800 4900 50  0001 C CNN
F 3 "" H 800 4900 50  0001 C CNN
	1    800  4900
	0    1    1    0   
$EndComp
Text Label 1550 4900 0    71   ~ 0
BOOT0
Text Notes 1150 5050 0    71   ~ 0
Program
Wire Notes Line
	450  5250 3850 5250
Text Notes 2500 3950 0    71   ~ 0
Reset & Prog Switches\n
Text Notes 7600 8200 0    71   ~ 0
Battery Regulator\n
$Comp
L RocketPCB-rescue:GPS_header-gps_header U8
U 1 1 5F7E44DB
P 13800 8950
F 0 "U8" H 13800 9565 50  0000 C CNN
F 1 "GPS_header" H 13800 9474 50  0000 C CNN
F 2 "GPS_head0:GPS_header_fp" H 13800 8950 50  0001 C CNN
F 3 "DOCUMENTATION" H 13800 8950 50  0001 C CNN
	1    13800 8950
	1    0    0    -1  
$EndComp
$Comp
L RocketPCB-rescue:Radio_Header-radio_header U3
U 1 1 5F7F38B6
P 11450 4300
F 0 "U3" H 11928 4346 50  0000 L CNN
F 1 "Radio_Header" H 11928 4255 50  0000 L CNN
F 2 "GPS_head0:gps_header_footprint" H 11450 4300 50  0001 C CNN
F 3 "DOCUMENTATION" H 11450 4300 50  0001 C CNN
	1    11450 4300
	1    0    0    -1  
$EndComp
Wire Wire Line
	13050 8700 12800 8700
Wire Wire Line
	13050 8900 12550 8900
Wire Wire Line
	13050 9000 12550 9000
Wire Wire Line
	13050 9100 12550 9100
Wire Wire Line
	13050 9200 12550 9200
Wire Wire Line
	14550 8700 14950 8700
Wire Wire Line
	14550 8800 14950 8800
Wire Wire Line
	14550 8900 14950 8900
Wire Wire Line
	14550 9000 14950 9000
Wire Wire Line
	14550 9100 14950 9100
Wire Wire Line
	10700 4000 10000 4000
Wire Wire Line
	10700 4200 10000 4200
Wire Wire Line
	10700 4300 10000 4300
Wire Wire Line
	10700 4400 10000 4400
Wire Wire Line
	10700 4500 10000 4500
Wire Wire Line
	10700 4600 10000 4600
$Comp
L power:GND #PWR0102
U 1 1 5FA1391A
P 12550 8900
F 0 "#PWR0102" H 12550 8650 50  0001 C CNN
F 1 "GND" V 12555 8772 50  0000 R CNN
F 2 "" H 12550 8900 50  0001 C CNN
F 3 "" H 12550 8900 50  0001 C CNN
	1    12550 8900
	0    1    1    0   
$EndComp
Text Label 12700 9000 0    47   ~ 0
SCL
Text Label 12700 9100 0    47   ~ 0
SDA
$Comp
L power:GND #PWR0103
U 1 1 5FA272E3
P 14950 8700
F 0 "#PWR0103" H 14950 8450 50  0001 C CNN
F 1 "GND" V 14955 8572 50  0000 R CNN
F 2 "" H 14950 8700 50  0001 C CNN
F 3 "" H 14950 8700 50  0001 C CNN
	1    14950 8700
	0    -1   -1   0   
$EndComp
Wire Wire Line
	7550 2200 7850 2200
Text Label 14700 9000 0    47   ~ 0
RX_D0
Text Label 14700 9100 0    47   ~ 0
TX_D1
$Comp
L power:GND #PWR0106
U 1 1 5FAA1A9D
P 10000 4000
F 0 "#PWR0106" H 10000 3750 50  0001 C CNN
F 1 "GND" H 10005 3827 50  0000 C CNN
F 2 "" H 10000 4000 50  0001 C CNN
F 3 "" H 10000 4000 50  0001 C CNN
	1    10000 4000
	0    1    1    0   
$EndComp
Wire Wire Line
	7550 2800 7850 2800
Text Label 10200 4300 0    47   ~ 0
SCK
Text Label 10200 4400 0    47   ~ 0
MISO
Text Label 10200 4500 0    47   ~ 0
MOSI
Text Notes 11900 8200 0    71   ~ 0
GPS Module
Text Notes 9400 3300 0    71   ~ 0
Radio Module\n
Text Notes 7600 8300 0    71   ~ 0
3.3V out 
Text Notes 9350 5800 0    71   ~ 0
FLASH MEMORY\n
Text Notes 11700 7400 2    47   ~ 0
16M-BIT SERIAL FLASH MEMORY
$Comp
L RocketPCB-rescue:W25Q16JV-flash_memory U5
U 1 1 5F7BE5CF
P 11100 6850
F 0 "U5" H 11100 7365 50  0000 C CNN
F 1 "W25Q16JV" H 11100 7274 50  0000 C CNN
F 2 "GPS_head0:W25Q16JV_footprint" H 11100 6850 50  0001 C CNN
F 3 "DOCUMENTATION" H 11100 6850 50  0001 C CNN
	1    11100 6850
	1    0    0    -1  
$EndComp
Text Label 10000 6700 0    47   ~ 0
FLASH_CS
Wire Wire Line
	9800 6700 10350 6700
Text Label 10350 6800 2    47   ~ 0
FLASH_MISO
Wire Wire Line
	11850 6800 12050 6800
Wire Wire Line
	12050 6800 12050 6700
Wire Wire Line
	11850 6700 12050 6700
Connection ~ 12050 6700
Wire Wire Line
	12050 6700 12050 6450
Wire Wire Line
	10350 6900 9900 6900
Wire Wire Line
	10350 6800 9850 6800
$Comp
L power:GND #PWR0110
U 1 1 5F89D54E
P 10150 7050
F 0 "#PWR0110" H 10150 6800 50  0001 C CNN
F 1 "GND" H 10155 6877 50  0000 C CNN
F 2 "" H 10150 7050 50  0001 C CNN
F 3 "" H 10150 7050 50  0001 C CNN
	1    10150 7050
	1    0    0    -1  
$EndComp
Wire Wire Line
	10350 7000 10150 7000
Wire Wire Line
	10150 7000 10150 7050
Text Label 12200 6900 2    47   ~ 0
FLASH_SCK
Text Label 12200 7000 2    47   ~ 0
FLASH_MOSI
Wire Wire Line
	11850 7000 12300 7000
Wire Wire Line
	11850 6900 12300 6900
$Comp
L Regulator_Switching:TPS63060 U9
U 1 1 5FA36435
P 2250 7100
F 0 "U9" H 2250 7767 50  0000 C CNN
F 1 "TPS63060" H 2250 7676 50  0000 C CNN
F 2 "Package_SON:Texas_S-PWSON-N10_ThermalVias" H 2250 6450 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/tps63060.pdf" H 2250 7100 50  0001 C CNN
	1    2250 7100
	1    0    0    -1  
$EndComp
Wire Notes Line
	7500 8050 16050 8050
Wire Notes Line
	9300 450  9300 8050
Wire Notes Line
	450  8600 7500 8600
Wire Wire Line
	1850 7000 1650 7000
Wire Wire Line
	1650 7000 1650 6900
Wire Wire Line
	1650 6900 1850 6900
Connection ~ 1650 6900
$Comp
L Device:C C29
U 1 1 5FBBFED9
P 1400 7550
F 0 "C29" H 1515 7596 50  0000 L CNN
F 1 "0.1uF" H 1515 7505 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 1438 7400 50  0001 C CNN
F 3 "~" H 1400 7550 50  0001 C CNN
	1    1400 7550
	1    0    0    -1  
$EndComp
Wire Wire Line
	1850 7100 1400 7100
Wire Wire Line
	1400 7100 1400 7400
Wire Wire Line
	1850 7300 1800 7300
Wire Wire Line
	1800 7300 1800 7800
Wire Wire Line
	1800 7800 2150 7800
Wire Wire Line
	2150 7800 2150 7700
Wire Wire Line
	2150 7800 2250 7800
Wire Wire Line
	2250 7800 2250 7700
Connection ~ 2150 7800
Wire Wire Line
	1800 7800 1400 7800
Wire Wire Line
	1400 7800 1400 7700
Connection ~ 1800 7800
$Comp
L power:GND #PWR0113
U 1 1 5FC3DA93
P 1800 7850
F 0 "#PWR0113" H 1800 7600 50  0001 C CNN
F 1 "GND" V 1805 7722 50  0000 R CNN
F 2 "" H 1800 7850 50  0001 C CNN
F 3 "" H 1800 7850 50  0001 C CNN
	1    1800 7850
	1    0    0    -1  
$EndComp
Wire Wire Line
	1800 7850 1800 7800
$Comp
L Device:L L2
U 1 1 5FC5E632
P 2250 6250
F 0 "L2" V 2440 6250 50  0000 C CNN
F 1 "1uH" V 2349 6250 50  0000 C CNN
F 2 "Inductor_SMD:L_0805_2012Metric" H 2250 6250 50  0001 C CNN
F 3 "~" H 2250 6250 50  0001 C CNN
	1    2250 6250
	0    -1   -1   0   
$EndComp
Wire Wire Line
	1850 6700 1750 6700
Wire Wire Line
	1750 6700 1750 6250
Wire Wire Line
	1750 6250 2100 6250
Wire Wire Line
	2400 6250 2800 6250
Wire Wire Line
	2800 6250 2800 6700
Wire Wire Line
	2800 6700 2650 6700
$Comp
L Device:R R8
U 1 1 5FCC1B2E
P 3050 7100
F 0 "R8" H 3120 7146 50  0000 L CNN
F 1 "2.2M" H 3120 7055 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 2980 7100 50  0001 C CNN
F 3 "~" H 3050 7100 50  0001 C CNN
	1    3050 7100
	1    0    0    -1  
$EndComp
Wire Wire Line
	3050 7250 3050 7300
Wire Wire Line
	3050 7250 3300 7250
Wire Wire Line
	3300 7250 3300 7300
Connection ~ 3050 7250
$Comp
L Device:R R9
U 1 1 5FD4BD68
P 3050 7450
F 0 "R9" H 2900 7500 50  0000 L CNN
F 1 "200k" H 2800 7400 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 2980 7450 50  0001 C CNN
F 3 "~" H 3050 7450 50  0001 C CNN
	1    3050 7450
	1    0    0    -1  
$EndComp
$Comp
L Device:C C30
U 1 1 5FD4DB74
P 3300 7450
F 0 "C30" H 3415 7496 50  0000 L CNN
F 1 "10pF" H 3400 7400 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 3338 7300 50  0001 C CNN
F 3 "~" H 3300 7450 50  0001 C CNN
	1    3300 7450
	1    0    0    -1  
$EndComp
Wire Wire Line
	3050 7600 3050 7700
Wire Wire Line
	3050 7700 3150 7700
Wire Wire Line
	3300 7700 3300 7600
$Comp
L power:GND #PWR0114
U 1 1 5FD71D23
P 3150 7700
F 0 "#PWR0114" H 3150 7450 50  0001 C CNN
F 1 "GND" V 3155 7572 50  0000 R CNN
F 2 "" H 3150 7700 50  0001 C CNN
F 3 "" H 3150 7700 50  0001 C CNN
	1    3150 7700
	1    0    0    -1  
$EndComp
Connection ~ 3150 7700
Wire Wire Line
	3150 7700 3300 7700
Wire Wire Line
	2750 7400 2750 8050
Wire Wire Line
	2750 8050 3700 8050
Wire Wire Line
	3700 8050 3700 7600
Wire Wire Line
	2650 7400 2750 7400
$Comp
L Device:R R14
U 1 1 5FD98BE2
P 3700 7450
F 0 "R14" H 3800 7500 50  0000 L CNN
F 1 "1M" H 3800 7400 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 3630 7450 50  0001 C CNN
F 3 "~" H 3700 7450 50  0001 C CNN
	1    3700 7450
	1    0    0    -1  
$EndComp
Wire Wire Line
	3700 6900 3700 7300
Wire Wire Line
	3700 6900 4050 6900
Connection ~ 3700 6900
Wire Wire Line
	4050 6900 4050 7100
Connection ~ 4050 6900
Wire Wire Line
	2650 6900 3050 6900
Wire Wire Line
	3050 6950 3050 6900
Connection ~ 3050 6900
Wire Wire Line
	3050 6900 3700 6900
Wire Wire Line
	2650 7100 2850 7100
Wire Wire Line
	2850 7100 2850 7250
Wire Wire Line
	2850 7250 3050 7250
Wire Notes Line
	5600 8600 5600 6450
Wire Notes Line
	7500 6450 7500 11250
Text Notes 600  5400 0    71   ~ 0
Voltage Regulator Servos - 6V\n
Wire Wire Line
	14450 2900 14950 2900
Wire Wire Line
	14950 2900 14950 2850
Connection ~ 14450 2900
Wire Wire Line
	14450 2900 14450 2950
$Comp
L Device:Polyfuse F1
U 1 1 600F38C6
P 15450 2550
F 0 "F1" V 15225 2550 50  0000 C CNN
F 1 "Polyfuse" V 15316 2550 50  0000 C CNN
F 2 "Fuse:Fuse_Littelfuse_395Series" H 15500 2350 50  0001 L CNN
F 3 "~" H 15450 2550 50  0001 C CNN
	1    15450 2550
	0    1    1    0   
$EndComp
Wire Wire Line
	15150 2550 15300 2550
Wire Wire Line
	15600 2550 15650 2550
Wire Wire Line
	4050 7400 4050 7550
Wire Wire Line
	4050 7550 4450 7550
Wire Wire Line
	4450 7550 4450 7650
$Comp
L power:GND #PWR0115
U 1 1 5FE60576
P 4450 7650
F 0 "#PWR0115" H 4450 7400 50  0001 C CNN
F 1 "GND" V 4455 7522 50  0000 R CNN
F 2 "" H 4450 7650 50  0001 C CNN
F 3 "" H 4450 7650 50  0001 C CNN
	1    4450 7650
	1    0    0    -1  
$EndComp
$Comp
L Device:C C31
U 1 1 5FE129F8
P 4050 7250
F 0 "C31" H 4165 7296 50  0000 L CNN
F 1 "22uF" H 4150 7200 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 4088 7100 50  0001 C CNN
F 3 "~" H 4050 7250 50  0001 C CNN
	1    4050 7250
	1    0    0    -1  
$EndComp
Wire Wire Line
	4050 6900 4450 6900
Connection ~ 4450 6900
Wire Wire Line
	4450 6900 4450 7100
Connection ~ 4450 7550
Wire Wire Line
	4450 7550 4450 7400
Wire Wire Line
	4850 7550 4450 7550
Wire Wire Line
	4850 6900 5000 6900
Wire Wire Line
	4450 6900 4850 6900
Connection ~ 4850 6900
Wire Wire Line
	4850 6900 4850 7100
Wire Wire Line
	4850 7400 4850 7550
$Comp
L Device:C C33
U 1 1 5FE138A3
P 4850 7250
F 0 "C33" H 4965 7296 50  0000 L CNN
F 1 "22uF" H 4950 7200 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 4888 7100 50  0001 C CNN
F 3 "~" H 4850 7250 50  0001 C CNN
	1    4850 7250
	1    0    0    -1  
$EndComp
$Comp
L Device:C C32
U 1 1 5FE133D9
P 4450 7250
F 0 "C32" H 4565 7296 50  0000 L CNN
F 1 "22uF" H 4550 7200 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 4488 7100 50  0001 C CNN
F 3 "~" H 4450 7250 50  0001 C CNN
	1    4450 7250
	1    0    0    -1  
$EndComp
Wire Wire Line
	1050 6900 950  6900
Wire Wire Line
	1650 6900 1050 6900
Connection ~ 1050 6900
Wire Wire Line
	1050 6900 1050 7550
Wire Wire Line
	1150 8200 1150 8050
Wire Wire Line
	1050 7550 1150 7550
Wire Wire Line
	1150 7550 1150 7750
$Comp
L Device:C C28
U 1 1 5FAE6549
P 1150 7900
F 0 "C28" H 1265 7946 50  0000 L CNN
F 1 "10uF" H 1265 7855 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 1188 7750 50  0001 C CNN
F 3 "~" H 1150 7900 50  0001 C CNN
	1    1150 7900
	1    0    0    -1  
$EndComp
Connection ~ 1050 7550
Wire Wire Line
	1050 7550 900  7550
Wire Wire Line
	900  7550 900  7750
Wire Wire Line
	900  8050 900  8200
$Comp
L Device:C C12
U 1 1 5FAE0189
P 900 7900
F 0 "C12" H 700 8050 50  0000 L CNN
F 1 "10uF" H 650 7800 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 938 7750 50  0001 C CNN
F 3 "~" H 900 7900 50  0001 C CNN
	1    900  7900
	1    0    0    -1  
$EndComp
Wire Wire Line
	7550 2100 7850 2100
Wire Wire Line
	6150 5000 5800 5000
Wire Wire Line
	6150 5200 5800 5200
NoConn ~ 5800 5000
NoConn ~ 5800 5200
Wire Wire Line
	3550 10550 3800 10550
NoConn ~ 3800 10550
Wire Wire Line
	14550 9200 14950 9200
NoConn ~ 14950 9200
Wire Wire Line
	13050 8800 12550 8800
NoConn ~ 12550 8800
Wire Wire Line
	10700 4100 10500 4100
Wire Wire Line
	7550 3800 8000 3800
NoConn ~ 8000 3800
Wire Wire Line
	6150 3700 5800 3700
NoConn ~ 5800 3700
NoConn ~ 8000 4900
NoConn ~ 8000 4600
NoConn ~ 8000 4500
NoConn ~ 8100 3300
NoConn ~ 8100 3400
Wire Wire Line
	5200 2400 6150 2400
Wire Wire Line
	5200 2400 5200 2600
NoConn ~ 5800 3900
NoConn ~ 5800 4000
NoConn ~ 5800 4100
NoConn ~ 5800 4200
NoConn ~ 5800 4300
NoConn ~ 5800 4400
NoConn ~ 5800 4700
Wire Wire Line
	5650 2600 5650 2500
Wire Wire Line
	5650 2500 6150 2500
NoConn ~ 7850 2400
Wire Wire Line
	7150 1800 7150 1700
Wire Wire Line
	7150 1400 7550 1400
Wire Wire Line
	8200 1000 8350 1000
Wire Wire Line
	14300 2650 14600 2650
NoConn ~ 14600 2650
Text GLabel 14650 4000 1    47   Output ~ 0
+3V3
Wire Wire Line
	14300 5500 14300 5400
Connection ~ 14300 5500
Text GLabel 14300 5400 1    47   Output ~ 0
+3V3
Text GLabel 14950 8900 2    47   Output ~ 0
+3V3
Text GLabel 10150 1300 1    47   Output ~ 0
+3V3
Text GLabel 15650 2550 2    47   Input ~ 0
+7V4
Text GLabel 12050 6450 1    47   Output ~ 0
+3V3
Text GLabel 9800 6150 1    47   Output ~ 0
+3V3
Text GLabel 9850 6900 0    47   Output ~ 0
+3V3
Text GLabel 12800 8350 1    47   Output ~ 0
+3V3
Text GLabel 10200 3900 0    47   Output ~ 0
+3V3
Text GLabel 10500 4100 0    47   Output ~ 0
+3V3
Text GLabel 7850 2900 2    47   Output ~ 0
+3V3
Text GLabel 8350 1000 2    47   Input ~ 0
+3V3
Text GLabel 8800 4600 1    47   Output ~ 0
+3V3
Text GLabel 950  6900 0    47   Output ~ 0
+7V4
Text GLabel 1200 9750 0    47   Output ~ 0
+3V3
Text GLabel 750  9950 0    47   Output ~ 0
+3V3
Text GLabel 1900 4300 2    47   Output ~ 0
~RESET~
Text GLabel 6050 1850 1    47   Output ~ 0
~RESET~
Wire Wire Line
	6050 2000 6050 1850
Connection ~ 6050 2000
Wire Wire Line
	6050 2000 5550 2000
Text GLabel 12550 9200 0    47   Output ~ 0
~RESET~
Text GLabel 10400 4700 0    47   Input ~ 0
~RESET~
NoConn ~ 7800 3500
NoConn ~ 10650 450 
$Comp
L Motor:Motor_Servo_JR M1
U 1 1 60F00681
P 6500 7300
F 0 "M1" H 6832 7365 50  0000 L CNN
F 1 "Motor_Servo_JR" H 6832 7274 50  0000 L CNN
F 2 "GPS_head0:JR_servo_connector" H 6500 7110 50  0001 C CNN
F 3 "http://forums.parallax.com/uploads/attachments/46831/74481.png" H 6500 7110 50  0001 C CNN
	1    6500 7300
	1    0    0    -1  
$EndComp
$Comp
L Motor:Motor_Servo_JR M2
U 1 1 60F058B1
P 6500 7850
F 0 "M2" H 6832 7915 50  0000 L CNN
F 1 "Motor_Servo_JR" H 6832 7824 50  0000 L CNN
F 2 "GPS_head0:JR_servo_connector" H 6500 7660 50  0001 C CNN
F 3 "http://forums.parallax.com/uploads/attachments/46831/74481.png" H 6500 7660 50  0001 C CNN
	1    6500 7850
	1    0    0    -1  
$EndComp
Wire Wire Line
	6200 7950 6050 7950
Wire Wire Line
	6050 7950 6050 8050
Wire Wire Line
	6200 7400 6050 7400
Wire Wire Line
	6050 7400 6050 7500
$Comp
L power:GND #PWR0101
U 1 1 60F6C577
P 6050 8050
F 0 "#PWR0101" H 6050 7800 50  0001 C CNN
F 1 "GND" V 6055 7922 50  0000 R CNN
F 2 "" H 6050 8050 50  0001 C CNN
F 3 "" H 6050 8050 50  0001 C CNN
	1    6050 8050
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0104
U 1 1 60F6CB16
P 6050 7500
F 0 "#PWR0104" H 6050 7250 50  0001 C CNN
F 1 "GND" V 6150 7500 50  0000 R CNN
F 2 "" H 6050 7500 50  0001 C CNN
F 3 "" H 6050 7500 50  0001 C CNN
	1    6050 7500
	1    0    0    -1  
$EndComp
Text GLabel 5200 6900 2    47   Input ~ 0
+6V
Wire Wire Line
	6200 7300 5900 7300
Wire Wire Line
	6200 7850 5900 7850
Text GLabel 5900 7300 0    47   Output ~ 0
+6V
Text GLabel 5900 7850 0    47   Output ~ 0
+6V
Text Label 7600 2000 0    47   ~ 0
PWM0
Text Label 7600 2100 0    47   ~ 0
PWM1
Wire Wire Line
	6200 7200 5850 7200
Wire Wire Line
	6200 7750 5850 7750
Text Notes 5650 6550 0    71   ~ 0
Servos\n
Text Label 5950 7200 0    47   ~ 0
PWM0
Text Label 5950 7750 0    47   ~ 0
PWM1
Wire Wire Line
	900  8200 1000 8200
$Comp
L power:GND #PWR0107
U 1 1 616B6769
P 1000 8200
F 0 "#PWR0107" H 1000 7950 50  0001 C CNN
F 1 "GND" V 1005 8072 50  0000 R CNN
F 2 "" H 1000 8200 50  0001 C CNN
F 3 "" H 1000 8200 50  0001 C CNN
	1    1000 8200
	1    0    0    -1  
$EndComp
Connection ~ 1000 8200
Wire Wire Line
	1000 8200 1150 8200
Wire Wire Line
	6150 3200 5800 3200
Wire Wire Line
	6150 3300 5800 3300
Wire Wire Line
	6150 5100 5800 5100
NoConn ~ 5800 5100
NoConn ~ 5800 3300
NoConn ~ 5800 3200
Wire Wire Line
	14400 5750 14300 5750
Connection ~ 14300 5750
Wire Wire Line
	14300 5750 14300 5900
Wire Wire Line
	6850 1700 6950 1700
Wire Wire Line
	7050 1700 7150 1700
Connection ~ 7050 1700
Connection ~ 7150 1700
Wire Wire Line
	7150 1700 7150 1400
$Comp
L UCC381DP-3:UCC381DP-3 U2
U 1 1 5FAC722E
P 9100 9600
F 0 "U2" H 9100 10115 50  0000 C CNN
F 1 "UCC381DP-3" H 9100 10024 50  0000 C CNN
F 2 "3v3 _linReg:SOIC127P599X175-8N" H 9100 9600 50  0001 C CNN
F 3 "DOCUMENTATION" H 9100 9600 50  0001 C CNN
	1    9100 9600
	1    0    0    -1  
$EndComp
Wire Wire Line
	8350 9650 8150 9650
Wire Wire Line
	8350 9550 8150 9550
$Comp
L power:GND #PWR0105
U 1 1 5FB1D365
P 8150 9550
F 0 "#PWR0105" H 8150 9300 50  0001 C CNN
F 1 "GND" V 8155 9422 50  0000 R CNN
F 2 "" H 8150 9550 50  0001 C CNN
F 3 "" H 8150 9550 50  0001 C CNN
	1    8150 9550
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR0108
U 1 1 5FB1DB39
P 8150 9650
F 0 "#PWR0108" H 8150 9400 50  0001 C CNN
F 1 "GND" V 8155 9522 50  0000 R CNN
F 2 "" H 8150 9650 50  0001 C CNN
F 3 "" H 8150 9650 50  0001 C CNN
	1    8150 9650
	0    1    1    0   
$EndComp
Text GLabel 7750 9450 0    47   Input ~ 0
+3V3
Text GLabel 8100 9750 0    47   Output ~ 0
+3V3
Wire Wire Line
	8350 9750 8100 9750
$Comp
L power:GND #PWR0109
U 1 1 5FBACE87
P 10100 9550
F 0 "#PWR0109" H 10100 9300 50  0001 C CNN
F 1 "GND" V 10105 9422 50  0000 R CNN
F 2 "" H 10100 9550 50  0001 C CNN
F 3 "" H 10100 9550 50  0001 C CNN
	1    10100 9550
	0    -1   -1   0   
$EndComp
Wire Wire Line
	9850 9550 10100 9550
Wire Wire Line
	9850 9650 10100 9650
$Comp
L power:GND #PWR0111
U 1 1 5FC018E2
P 10100 9650
F 0 "#PWR0111" H 10100 9400 50  0001 C CNN
F 1 "GND" V 10105 9522 50  0000 R CNN
F 2 "" H 10100 9650 50  0001 C CNN
F 3 "" H 10100 9650 50  0001 C CNN
	1    10100 9650
	0    -1   -1   0   
$EndComp
$Comp
L Device:R R10
U 1 1 5FC09997
P 10150 9750
F 0 "R10" H 10200 9850 50  0000 L CNN
F 1 "10k" H 10200 9750 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 10080 9750 50  0001 C CNN
F 3 "~" H 10150 9750 50  0001 C CNN
	1    10150 9750
	0    1    1    0   
$EndComp
Wire Wire Line
	9850 9750 10000 9750
Wire Wire Line
	9850 9450 10450 9450
Wire Wire Line
	10450 9450 10450 9750
Wire Wire Line
	10450 9750 10300 9750
Text GLabel 11200 8850 1    47   Output ~ 0
+7V4
Wire Wire Line
	10450 9450 10450 9300
Connection ~ 10450 9450
Wire Wire Line
	10450 9450 10700 9450
Wire Wire Line
	10700 9450 10700 9550
$Comp
L Device:C C3
U 1 1 5FCD0513
P 10700 9700
F 0 "C3" H 10500 9450 50  0000 L CNN
F 1 "1uF" H 10500 9550 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 10738 9550 50  0001 C CNN
F 3 "~" H 10700 9700 50  0001 C CNN
	1    10700 9700
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0112
U 1 1 5FCD2F8A
P 10700 9850
F 0 "#PWR0112" H 10700 9600 50  0001 C CNN
F 1 "GND" H 10705 9677 50  0000 C CNN
F 2 "" H 10700 9850 50  0001 C CNN
F 3 "" H 10700 9850 50  0001 C CNN
	1    10700 9850
	1    0    0    -1  
$EndComp
$Comp
L Device:C C2
U 1 1 5FCD6B9C
P 8350 9150
F 0 "C2" H 8465 9196 50  0000 L CNN
F 1 "10uF" H 8465 9105 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 8388 9000 50  0001 C CNN
F 3 "~" H 8350 9150 50  0001 C CNN
	1    8350 9150
	1    0    0    -1  
$EndComp
$Comp
L Device:C C1
U 1 1 5FCE6131
P 8150 9150
F 0 "C1" H 8265 9196 50  0000 L CNN
F 1 "1uF" H 8265 9105 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 8188 9000 50  0001 C CNN
F 3 "~" H 8150 9150 50  0001 C CNN
	1    8150 9150
	-1   0    0    1   
$EndComp
Wire Wire Line
	8350 9450 8350 9300
Connection ~ 8350 9450
Wire Wire Line
	8150 9450 8150 9300
Connection ~ 8150 9450
Wire Wire Line
	8150 9450 8350 9450
Wire Wire Line
	8150 9000 8150 8900
Wire Wire Line
	8150 8900 8250 8900
Wire Wire Line
	8350 8900 8350 9000
$Comp
L power:GND #PWR0116
U 1 1 5FD6F39F
P 8250 8900
F 0 "#PWR0116" H 8250 8650 50  0001 C CNN
F 1 "GND" H 8255 8727 50  0000 C CNN
F 2 "" H 8250 8900 50  0001 C CNN
F 3 "" H 8250 8900 50  0001 C CNN
	1    8250 8900
	-1   0    0    1   
$EndComp
Connection ~ 8250 8900
Wire Wire Line
	8250 8900 8350 8900
$Comp
L RocketPCB-rescue:DMG2301L-Transistor_FET Q1
U 1 1 5FD963DC
P 10550 9100
F 0 "Q1" H 10754 9146 50  0000 L CNN
F 1 "DMG2301L" H 10754 9055 50  0000 L CNN
F 2 "Package_TO_SOT_SMD:SOT-23" H 10750 9025 50  0001 L CIN
F 3 "https://www.diodes.com/assets/Datasheets/DMG2301L.pdf" H 10550 9100 50  0001 L CNN
	1    10550 9100
	-1   0    0    1   
$EndComp
Wire Wire Line
	10450 8900 10450 8750
$Comp
L Diode:MBR0540 D2
U 1 1 5FDD302D
P 10850 9450
F 0 "D2" H 10950 9250 50  0000 C CNN
F 1 "MBR0540" H 10950 9350 50  0000 C CNN
F 2 "Diode_SMD:D_SOD-123" H 10850 9275 50  0001 C CNN
F 3 "http://www.mccsemi.com/up_pdf/MBR0520~MBR0580(SOD123).pdf" H 10850 9450 50  0001 C CNN
	1    10850 9450
	1    0    0    -1  
$EndComp
Connection ~ 10700 9450
$Comp
L Device:R R11
U 1 1 5FDDFB2E
P 11200 9600
F 0 "R11" H 11270 9646 50  0000 L CNN
F 1 "100k" H 11270 9555 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 11130 9600 50  0001 C CNN
F 3 "~" H 11200 9600 50  0001 C CNN
	1    11200 9600
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0117
U 1 1 5FDE5AB4
P 11200 9850
F 0 "#PWR0117" H 11200 9600 50  0001 C CNN
F 1 "GND" H 11205 9677 50  0000 C CNN
F 2 "" H 11200 9850 50  0001 C CNN
F 3 "" H 11200 9850 50  0001 C CNN
	1    11200 9850
	1    0    0    -1  
$EndComp
Wire Wire Line
	11200 9750 11200 9850
Text GLabel 10450 8750 1    47   Output ~ 0
VBUS
Wire Wire Line
	10750 9100 11200 9100
Wire Wire Line
	11200 9100 11200 9450
Wire Wire Line
	11000 9450 11200 9450
Connection ~ 11200 9450
Wire Wire Line
	11200 9100 11200 8850
Connection ~ 11200 9100
$Comp
L Device:R R12
U 1 1 60014579
P 9800 6450
F 0 "R12" H 9870 6496 50  0000 L CNN
F 1 "4.7K" H 9870 6405 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 9730 6450 50  0001 C CNN
F 3 "~" H 9800 6450 50  0001 C CNN
	1    9800 6450
	1    0    0    -1  
$EndComp
Wire Wire Line
	9800 6300 9800 6150
Wire Wire Line
	9800 6600 9800 6700
$Comp
L Device:C C11
U 1 1 600A5327
P 9900 1200
F 0 "C11" H 10015 1246 50  0000 L CNN
F 1 "0.1uF" H 10015 1155 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 9938 1050 50  0001 C CNN
F 3 "~" H 9900 1200 50  0001 C CNN
	1    9900 1200
	-1   0    0    1   
$EndComp
$Comp
L power:GND #PWR0118
U 1 1 600CF8CD
P 9900 1000
F 0 "#PWR0118" H 9900 750 50  0001 C CNN
F 1 "GND" H 9905 827 50  0000 C CNN
F 2 "" H 9900 1000 50  0001 C CNN
F 3 "" H 9900 1000 50  0001 C CNN
	1    9900 1000
	-1   0    0    1   
$EndComp
$Comp
L Device:C C16
U 1 1 6010E853
P 12450 8450
F 0 "C16" H 12565 8496 50  0000 L CNN
F 1 "0.1uF" H 12565 8405 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 12488 8300 50  0001 C CNN
F 3 "~" H 12450 8450 50  0001 C CNN
	1    12450 8450
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR0119
U 1 1 60115DCA
P 12200 8450
F 0 "#PWR0119" H 12200 8200 50  0001 C CNN
F 1 "GND" V 12205 8322 50  0000 R CNN
F 2 "" H 12200 8450 50  0001 C CNN
F 3 "" H 12200 8450 50  0001 C CNN
	1    12200 8450
	0    1    1    0   
$EndComp
Wire Wire Line
	12200 8450 12300 8450
Wire Wire Line
	12600 8450 12800 8450
Wire Wire Line
	12800 8450 12800 8350
Wire Wire Line
	12800 8450 12800 8700
Connection ~ 12800 8450
$Comp
L Device:C C10
U 1 1 60196D91
P 9900 7200
F 0 "C10" H 10015 7246 50  0000 L CNN
F 1 "0.1uF" H 10015 7155 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 9938 7050 50  0001 C CNN
F 3 "~" H 9900 7200 50  0001 C CNN
	1    9900 7200
	-1   0    0    1   
$EndComp
Wire Wire Line
	9900 7050 9900 6900
Connection ~ 9900 6900
Wire Wire Line
	9900 6900 9850 6900
$Comp
L power:GND #PWR0120
U 1 1 601C40E9
P 9900 7400
F 0 "#PWR0120" H 9900 7150 50  0001 C CNN
F 1 "GND" H 9905 7227 50  0000 C CNN
F 2 "" H 9900 7400 50  0001 C CNN
F 3 "" H 9900 7400 50  0001 C CNN
	1    9900 7400
	1    0    0    -1  
$EndComp
Wire Wire Line
	9900 7350 9900 7400
Wire Wire Line
	750  9950 850  9950
$Comp
L Device:C C7
U 1 1 60229A5A
P 850 10400
F 0 "C7" H 965 10446 50  0000 L CNN
F 1 "100nF" H 965 10355 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 888 10250 50  0001 C CNN
F 3 "~" H 850 10400 50  0001 C CNN
	1    850  10400
	1    0    0    -1  
$EndComp
Wire Wire Line
	850  10250 850  9950
Connection ~ 850  9950
Wire Wire Line
	850  9950 1850 9950
$Comp
L power:GND #PWR0121
U 1 1 602559E1
P 850 10550
F 0 "#PWR0121" H 850 10300 50  0001 C CNN
F 1 "GND" V 855 10422 50  0000 R CNN
F 2 "" H 850 10550 50  0001 C CNN
F 3 "" H 850 10550 50  0001 C CNN
	1    850  10550
	1    0    0    -1  
$EndComp
$Comp
L Device:R R17
U 1 1 602BDA87
P 9950 2100
F 0 "R17" H 10020 2146 50  0000 L CNN
F 1 "4.7k" H 10020 2055 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 9880 2100 50  0001 C CNN
F 3 "~" H 9950 2100 50  0001 C CNN
	1    9950 2100
	1    0    0    -1  
$EndComp
$Comp
L Device:R R13
U 1 1 602BED6C
P 9650 2100
F 0 "R13" H 9720 2146 50  0000 L CNN
F 1 "4.7k" H 9720 2055 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 9580 2100 50  0001 C CNN
F 3 "~" H 9650 2100 50  0001 C CNN
	1    9650 2100
	1    0    0    -1  
$EndComp
Text GLabel 9800 2400 3    47   Output ~ 0
+3V3
$Comp
L Transistor_FET:DMG2301L Q2
U 1 1 6048B4F6
P 14950 2650
F 0 "Q2" V 15292 2650 50  0000 C CNN
F 1 "DMG2301L" V 15201 2650 50  0000 C CNN
F 2 "Package_TO_SOT_SMD:SOT-23" H 15150 2575 50  0001 L CIN
F 3 "https://www.diodes.com/assets/Datasheets/DMG2301L.pdf" H 14950 2650 50  0001 L CNN
	1    14950 2650
	0    -1   -1   0   
$EndComp
NoConn ~ 7850 2300
$Comp
L Device:LED D4
U 1 1 5F856AA9
P 7800 8950
F 0 "D4" H 7793 9167 50  0000 C CNN
F 1 "LED" H 7793 9076 50  0000 C CNN
F 2 "LED_SMD:LED_0603_1608Metric_Pad1.05x0.95mm_HandSolder" H 7800 8950 50  0001 C CNN
F 3 "~" H 7800 8950 50  0001 C CNN
	1    7800 8950
	0    1    1    0   
$EndComp
Wire Wire Line
	1850 10350 1350 10350
Wire Wire Line
	7750 9450 7800 9450
Wire Wire Line
	7800 9450 7800 9250
Connection ~ 7800 9450
Wire Wire Line
	7800 9450 8150 9450
Wire Wire Line
	7800 8800 7800 8600
$Comp
L power:GND #PWR04
U 1 1 5F96333D
P 7800 8600
F 0 "#PWR04" H 7800 8350 50  0001 C CNN
F 1 "GND" H 7805 8427 50  0000 C CNN
F 2 "" H 7800 8600 50  0001 C CNN
F 3 "" H 7800 8600 50  0001 C CNN
	1    7800 8600
	-1   0    0    1   
$EndComp
$Comp
L Connector:TestPoint TP4
U 1 1 5F966683
P 7800 9250
F 0 "TP4" H 7850 9500 50  0000 L CNN
F 1 "TestPoint" H 7850 9400 50  0000 L CNN
F 2 "TestPoint:TestPoint_Pad_D1.0mm" H 8000 9250 50  0001 C CNN
F 3 "~" H 8000 9250 50  0001 C CNN
	1    7800 9250
	0    -1   -1   0   
$EndComp
Connection ~ 7800 9250
Wire Wire Line
	7800 9250 7800 9100
$Comp
L Connector:TestPoint TP2
U 1 1 5F983E00
P 5150 6900
F 0 "TP2" H 5200 7150 50  0000 L CNN
F 1 "TestPoint" H 5200 7050 50  0000 L CNN
F 2 "TestPoint:TestPoint_Pad_D1.0mm" H 5350 6900 50  0001 C CNN
F 3 "~" H 5350 6900 50  0001 C CNN
	1    5150 6900
	1    0    0    -1  
$EndComp
Connection ~ 5150 6900
Wire Wire Line
	5150 6900 5200 6900
$Comp
L Device:LED D3
U 1 1 5F987713
P 4300 6700
F 0 "D3" H 4293 6917 50  0000 C CNN
F 1 "LED" H 4293 6826 50  0000 C CNN
F 2 "LED_SMD:LED_0603_1608Metric_Pad1.05x0.95mm_HandSolder" H 4300 6700 50  0001 C CNN
F 3 "~" H 4300 6700 50  0001 C CNN
	1    4300 6700
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR03
U 1 1 5F989A8C
P 4150 6700
F 0 "#PWR03" H 4150 6450 50  0001 C CNN
F 1 "GND" V 4155 6572 50  0000 R CNN
F 2 "" H 4150 6700 50  0001 C CNN
F 3 "" H 4150 6700 50  0001 C CNN
	1    4150 6700
	0    1    1    0   
$EndComp
Wire Wire Line
	5000 6700 5000 6900
Connection ~ 5000 6900
Wire Wire Line
	5000 6900 5150 6900
$Comp
L Device:R R15
U 1 1 5F9EC1AC
P 4600 6700
F 0 "R15" H 4670 6746 50  0000 L CNN
F 1 "46" H 4670 6655 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 4530 6700 50  0001 C CNN
F 3 "~" H 4600 6700 50  0001 C CNN
	1    4600 6700
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4750 6700 5000 6700
$Comp
L Connector:TestPoint TP3
U 1 1 5FA5605A
P 7100 5500
F 0 "TP3" H 7150 5750 50  0000 L CNN
F 1 "TestPoint" H 7150 5650 50  0000 L CNN
F 2 "TestPoint:TestPoint_Pad_D1.0mm" H 7300 5500 50  0001 C CNN
F 3 "~" H 7300 5500 50  0001 C CNN
	1    7100 5500
	0    1    1    0   
$EndComp
Wire Wire Line
	6950 5500 7100 5500
$Comp
L MPU6050-Breakout-Symbol:MPU6050_BO_FP U4
U 1 1 5FAD3AD5
P 11150 1650
F 0 "U4" H 11150 2265 50  0000 C CNN
F 1 "MPU6050_BO_FP" H 11150 2174 50  0000 C CNN
F 2 "GPS_head0:MPU6050-footprint" H 11150 1650 50  0001 C CNN
F 3 "DOCUMENTATION" H 11150 1650 50  0001 C CNN
	1    11150 1650
	1    0    0    -1  
$EndComp
NoConn ~ 10400 1500
Wire Wire Line
	9900 1050 9900 1000
Wire Wire Line
	10400 1400 10150 1400
Wire Wire Line
	10150 1400 10150 1300
Wire Wire Line
	10150 1400 9900 1400
Wire Wire Line
	9900 1400 9900 1350
Connection ~ 10150 1400
Wire Wire Line
	10400 1600 9900 1600
Wire Wire Line
	10400 1900 10150 1900
Wire Wire Line
	9650 2250 9650 2300
Wire Wire Line
	9650 2300 9800 2300
Wire Wire Line
	9950 2300 9950 2250
Wire Wire Line
	9800 2300 9800 2400
Connection ~ 9800 2300
Wire Wire Line
	9800 2300 9950 2300
Wire Wire Line
	10400 1700 9650 1700
Wire Wire Line
	9650 1700 9650 1950
Wire Wire Line
	10400 1800 9950 1800
Wire Wire Line
	9950 1800 9950 1950
$Comp
L power:GND #PWR08
U 1 1 5FD41BB7
P 12150 1900
F 0 "#PWR08" H 12150 1650 50  0001 C CNN
F 1 "GND" H 12155 1727 50  0000 C CNN
F 2 "" H 12150 1900 50  0001 C CNN
F 3 "" H 12150 1900 50  0001 C CNN
	1    12150 1900
	0    -1   -1   0   
$EndComp
Wire Wire Line
	11900 1900 12150 1900
Wire Wire Line
	11900 1800 12200 1800
Wire Wire Line
	11900 1600 12200 1600
Wire Wire Line
	11900 1700 12200 1700
NoConn ~ 12200 1600
NoConn ~ 12200 1700
$Comp
L power:GND #PWR010
U 1 1 5FEF9E1E
P 12350 1500
F 0 "#PWR010" H 12350 1250 50  0001 C CNN
F 1 "GND" H 12355 1327 50  0000 C CNN
F 2 "" H 12350 1500 50  0001 C CNN
F 3 "" H 12350 1500 50  0001 C CNN
	1    12350 1500
	0    -1   -1   0   
$EndComp
Wire Wire Line
	11900 1500 12350 1500
Wire Wire Line
	11900 1400 12250 1400
NoConn ~ 12250 1400
NoConn ~ 12200 1800
Wire Wire Line
	8600 4050 8600 4200
Wire Wire Line
	7550 2000 7850 2000
$Comp
L MCU_ST_STM32F4:STM32F405RGTx U1
U 1 1 5F2C61AB
P 6850 3600
F 0 "U1" H 6450 1850 50  0000 C CNN
F 1 "STM32F405RGTx" H 6800 3700 50  0000 C CNN
F 2 "Package_QFP:LQFP-64_10x10mm_P0.5mm" H 6250 1900 50  0001 R CNN
F 3 "http://www.st.com/st-web-ui/static/active/en/resource/technical/document/datasheet/DM00037051.pdf" H 6850 3600 50  0001 C CNN
	1    6850 3600
	1    0    0    -1  
$EndComp
NoConn ~ 10150 1900
$Comp
L Device:R R16
U 1 1 608B0935
P 9850 4600
F 0 "R16" H 9920 4646 50  0000 L CNN
F 1 "4.7K" H 9920 4555 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 9780 4600 50  0001 C CNN
F 3 "~" H 9850 4600 50  0001 C CNN
	1    9850 4600
	0    -1   -1   0   
$EndComp
Wire Wire Line
	10400 4700 10700 4700
Text GLabel 9550 4800 3    47   Output ~ 0
+3V3
NoConn ~ 8000 3700
NoConn ~ 7850 2700
NoConn ~ 7850 2200
NoConn ~ 14950 8800
Text Label 7650 2800 0    47   ~ 0
G0
Text Label 10200 4200 0    47   ~ 0
G0
NoConn ~ 15250 6300
NoConn ~ 15250 6400
NoConn ~ 7850 2500
NoConn ~ 7850 2600
NoConn ~ 6650 1800
NoConn ~ 5200 2750
NoConn ~ 2100 3100
NoConn ~ 2100 3000
NoConn ~ 2100 2800
NoConn ~ 2100 2700
NoConn ~ 2100 2500
NoConn ~ 2100 2400
NoConn ~ 2100 2200
NoConn ~ 2100 2100
NoConn ~ 2100 1900
NoConn ~ 2100 1800
Wire Wire Line
	2000 1500 2350 1500
Wire Wire Line
	2600 1000 2650 1000
Connection ~ 2600 1000
Wire Wire Line
	2600 1100 2600 1000
Wire Wire Line
	2500 1100 2600 1100
Wire Wire Line
	2500 1000 2600 1000
$Comp
L power:GND #PWR09
U 1 1 5FD05A10
P 2650 1000
F 0 "#PWR09" H 2650 750 50  0001 C CNN
F 1 "GND" H 2655 827 50  0000 C CNN
F 2 "" H 2650 1000 50  0001 C CNN
F 3 "" H 2650 1000 50  0001 C CNN
	1    2650 1000
	0    -1   -1   0   
$EndComp
Wire Wire Line
	1900 1100 2200 1100
Wire Wire Line
	1900 1000 2200 1000
$Comp
L Connector:USB_C_Receptacle J1
U 1 1 5F882D78
P 1300 1800
F 0 "J1" H 1407 3067 50  0000 C CNN
F 1 "USB_C_Receptacle" H 1407 2976 50  0000 C CNN
F 2 "Connector_USB:USB_C_Receptacle_Palconn_UTC16-G" H 1450 1800 50  0001 C CNN
F 3 "https://www.usb.org/sites/default/files/documents/usb_type-c.zip" H 1450 1800 50  0001 C CNN
	1    1300 1800
	1    0    0    -1  
$EndComp
$Comp
L Device:R R3
U 1 1 5FC3CEF9
P 2350 1100
F 0 "R3" H 2280 1054 50  0000 R CNN
F 1 "5.1k" H 2280 1145 50  0000 R CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 2280 1100 50  0001 C CNN
F 3 "~" H 2350 1100 50  0001 C CNN
	1    2350 1100
	0    -1   -1   0   
$EndComp
$Comp
L Device:R R2
U 1 1 5FC3C7BA
P 2350 1000
F 0 "R2" H 2280 954 50  0000 R CNN
F 1 "5.1k" H 2280 1045 50  0000 R CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 2280 1000 50  0001 C CNN
F 3 "~" H 2350 1000 50  0001 C CNN
	1    2350 1000
	0    1    1    0   
$EndComp
NoConn ~ 1000 3600
$Comp
L power:GND #PWR07
U 1 1 5FC072E4
P 1300 3600
F 0 "#PWR07" H 1300 3350 50  0001 C CNN
F 1 "GND" H 1305 3427 50  0000 C CNN
F 2 "" H 1300 3600 50  0001 C CNN
F 3 "" H 1300 3600 50  0001 C CNN
	1    1300 3600
	1    0    0    -1  
$EndComp
Wire Wire Line
	1000 3400 1000 3600
Wire Wire Line
	1300 3400 1300 3600
Wire Wire Line
	1900 3100 2100 3100
Wire Wire Line
	1900 3000 2100 3000
Wire Wire Line
	1900 2800 2100 2800
Wire Wire Line
	1900 2700 2100 2700
Wire Wire Line
	1900 2500 2100 2500
Wire Wire Line
	1900 2400 2100 2400
Wire Wire Line
	1900 2200 2100 2200
Wire Wire Line
	1900 2100 2100 2100
Wire Wire Line
	1900 1900 2100 1900
Wire Wire Line
	1900 1800 2100 1800
Connection ~ 2000 1500
Wire Wire Line
	2000 1600 2000 1500
Wire Wire Line
	1900 1600 2000 1600
Wire Wire Line
	1900 1500 2000 1500
Text Label 2350 1500 2    50   ~ 0
D+
Connection ~ 2000 1300
Wire Wire Line
	1900 1300 2000 1300
Wire Wire Line
	2000 1300 2350 1300
Wire Wire Line
	2000 1400 2000 1300
Wire Wire Line
	1900 1400 2000 1400
Text Label 2350 1300 2    50   ~ 0
D-
Wire Wire Line
	1900 800  2350 800 
Text GLabel 2350 800  2    47   Input ~ 0
VBUS
Wire Notes Line
	500  3800 3850 3800
Wire Wire Line
	9550 4800 9550 4600
Wire Wire Line
	9550 4600 9700 4600
$Comp
L Device:C C13
U 1 1 5F9B13CB
P 10550 3550
F 0 "C13" H 10665 3596 50  0000 L CNN
F 1 "0.1uF" H 10665 3505 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 10588 3400 50  0001 C CNN
F 3 "~" H 10550 3550 50  0001 C CNN
	1    10550 3550
	1    0    0    -1  
$EndComp
Wire Wire Line
	10700 3900 10550 3900
Wire Wire Line
	10550 3900 10550 3700
Wire Wire Line
	10550 3400 10550 3300
Wire Wire Line
	10550 3300 10700 3300
Wire Wire Line
	10200 3900 10550 3900
Connection ~ 10550 3900
$Comp
L power:GND #PWR?
U 1 1 5FA89963
P 10700 3300
F 0 "#PWR?" H 10700 3050 50  0001 C CNN
F 1 "GND" H 10705 3127 50  0000 C CNN
F 2 "" H 10700 3300 50  0001 C CNN
F 3 "" H 10700 3300 50  0001 C CNN
	1    10700 3300
	0    -1   -1   0   
$EndComp
$EndSCHEMATC
