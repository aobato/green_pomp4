EESchema Schematic File Version 2
LIBS:green_pomp3-rescue
LIBS:w_connectors
LIBS:power
LIBS:device
LIBS:switches
LIBS:relays
LIBS:motors
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:green_pomp3-cache
EELAYER 25 0
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
L PIC16F1503 U1
U 1 1 5B0A6906
P 6600 3250
F 0 "U1" H 6600 3650 60  0000 C CNN
F 1 "PIC16F18323-I/P" H 6600 2800 60  0000 C CNN
F 2 "MCU_Microchip:PIC16F1503-I_P" H 6850 4300 60  0001 C CNN
F 3 "" H 6850 4300 60  0001 C CNN
	1    6600 3250
	1    0    0    -1  
$EndComp
$Comp
L C_Small C2
U 1 1 5B0A6A1D
P 6600 2600
F 0 "C2" H 6610 2670 50  0000 L CNN
F 1 "0.1u" H 6610 2520 50  0000 L CNN
F 2 "Capacitors_THT:C_Disc_D6.0mm_W2.5mm_P5.00mm" H 6600 2600 50  0001 C CNN
F 3 "" H 6600 2600 50  0001 C CNN
	1    6600 2600
	0    1    1    0   
$EndComp
$Comp
L CP C1
U 1 1 5B0D44F4
P 5200 1850
F 0 "C1" H 5225 1950 50  0000 L CNN
F 1 "1000uF" H 5225 1750 50  0000 L CNN
F 2 "Capacitors_THT:CP_Radial_D10.0mm_P2.50mm" H 5238 1700 50  0001 C CNN
F 3 "" H 5200 1850 50  0001 C CNN
	1    5200 1850
	1    0    0    1   
$EndComp
$Comp
L R R4
U 1 1 5B0D48AC
P 5350 3250
F 0 "R4" V 5430 3250 50  0000 C CNN
F 1 "10K" V 5350 3250 50  0000 C CNN
F 2 "Resistors_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" V 5280 3250 50  0001 C CNN
F 3 "" H 5350 3250 50  0001 C CNN
	1    5350 3250
	0    1    1    0   
$EndComp
$Comp
L R R3
U 1 1 5B0D5BD4
P 3900 3500
F 0 "R3" V 3980 3500 50  0000 C CNN
F 1 "470" V 3900 3500 50  0000 C CNN
F 2 "Resistors_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" V 3830 3500 50  0001 C CNN
F 3 "" H 3900 3500 50  0001 C CNN
	1    3900 3500
	1    0    0    -1  
$EndComp
$Comp
L R R2
U 1 1 5B0D5C2B
P 3600 3800
F 0 "R2" V 3680 3800 50  0000 C CNN
F 1 "20K" V 3600 3800 50  0000 C CNN
F 2 "Resistors_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" V 3530 3800 50  0001 C CNN
F 3 "" H 3600 3800 50  0001 C CNN
	1    3600 3800
	1    0    0    -1  
$EndComp
$Comp
L Q_NMOS_DGS-RESCUE-green_pomp3 Q1
U 1 1 5B0D5C9A
P 3700 4450
F 0 "Q1" H 3900 4500 50  0000 L CNN
F 1 "2SK4017" H 3900 4400 50  0000 L CNN
F 2 "FET:2SK4017_Q" H 3900 4550 50  0001 C CNN
F 3 "" H 3700 4450 50  0001 C CNN
	1    3700 4450
	-1   0    0    -1  
$EndComp
$Comp
L C_Small C4
U 1 1 5B0EA248
P 3100 2850
F 0 "C4" H 3110 2920 50  0000 L CNN
F 1 "15p" H 3110 2770 50  0000 L CNN
F 2 "Capacitors_THT:C_Disc_D3.0mm_W2.0mm_P2.50mm" H 3100 2850 50  0001 C CNN
F 3 "" H 3100 2850 50  0001 C CNN
	1    3100 2850
	0    1    -1   0   
$EndComp
$Comp
L C_Small C5
U 1 1 5B0EB41A
P 3100 3150
F 0 "C5" H 3110 3220 50  0000 L CNN
F 1 "15p" H 3110 3070 50  0000 L CNN
F 2 "Capacitors_THT:C_Disc_D3.0mm_W2.0mm_P2.50mm" H 3100 3150 50  0001 C CNN
F 3 "" H 3100 3150 50  0001 C CNN
	1    3100 3150
	0    1    -1   0   
$EndComp
$Comp
L Crystal Y1
U 1 1 5B0EB7F5
P 3550 3000
F 0 "Y1" H 3550 3150 50  0000 C CNN
F 1 "32.768KHz" H 3550 2850 50  0000 C CNN
F 2 "Crystals:Crystal_AT310_d3.0mm_l10.0mm_Horizontal" H 3550 3000 50  0001 C CNN
F 3 "" H 3550 3000 50  0001 C CNN
	1    3550 3000
	0    -1   1    0   
$EndComp
$Comp
L R R5
U 1 1 5B0EBFDE
P 3950 3000
F 0 "R5" V 4030 3000 50  0000 C CNN
F 1 "10M" V 3950 3000 50  0000 C CNN
F 2 "Resistors_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" V 3880 3000 50  0001 C CNN
F 3 "" H 3950 3000 50  0001 C CNN
	1    3950 3000
	1    0    0    -1  
$EndComp
$Comp
L HEADER_2 J2
U 1 1 5B0F05DB
P 3700 4900
F 0 "J2" H 3700 5050 60  0000 C CNN
F 1 "MOTOR" H 3700 4750 60  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x02_Pitch2.54mm" H 3700 4900 60  0001 C CNN
F 3 "" H 3700 4900 60  0000 C CNN
	1    3700 4900
	1    0    0    -1  
$EndComp
$Comp
L D D2
U 1 1 5B0F0654
P 3350 4800
F 0 "D2" H 3350 4900 50  0000 C CNN
F 1 "D" H 3350 4700 50  0000 C CNN
F 2 "D:1S4_V" H 3350 4800 50  0001 C CNN
F 3 "" H 3350 4800 50  0001 C CNN
	1    3350 4800
	0    1    -1   0   
$EndComp
$Comp
L LED LED1
U 1 1 5B116175
P 8900 4600
F 0 "LED1" H 8900 4700 50  0000 C CNN
F 1 "status" H 8900 4500 50  0000 C CNN
F 2 "LEDs:LED_D3.0mm" H 8900 4600 50  0001 C CNN
F 3 "" H 8900 4600 50  0001 C CNN
	1    8900 4600
	-1   0    0    -1  
$EndComp
$Comp
L R R6
U 1 1 5B11622C
P 9200 4600
F 0 "R6" V 9280 4600 50  0000 C CNN
F 1 "1K" V 9200 4600 50  0000 C CNN
F 2 "Resistors_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" V 9130 4600 50  0001 C CNN
F 3 "" H 9200 4600 50  0001 C CNN
	1    9200 4600
	0    -1   1    0   
$EndComp
$Comp
L SW_Push_Dual SW1
U 1 1 5B1164AF
P 9500 3650
F 0 "SW1" H 9550 3750 50  0000 L CNN
F 1 "WaitTime" H 9500 3380 50  0000 C CNN
F 2 "Buttons_Switches_THT:SW_PUSH_6mm" H 9500 3850 50  0001 C CNN
F 3 "" H 9500 3850 50  0001 C CNN
	1    9500 3650
	1    0    0    -1  
$EndComp
$Comp
L HEADER_2 J1
U 1 1 5B117F09
P 2050 1050
F 0 "J1" H 2050 1200 60  0000 C CNN
F 1 "POWER" H 2050 900 60  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x02_Pitch2.54mm" H 2050 1050 60  0001 C CNN
F 3 "" H 2050 1050 60  0000 C CNN
	1    2050 1050
	1    0    0    -1  
$EndComp
$Comp
L SW_Push_Dual SW2
U 1 1 5B0D46A6
P 9500 4900
F 0 "SW2" H 9550 5000 50  0000 L CNN
F 1 "WaterVol" H 9500 4630 50  0000 C CNN
F 2 "Buttons_Switches_THT:SW_PUSH_6mm" H 9500 5100 50  0001 C CNN
F 3 "" H 9500 5100 50  0001 C CNN
	1    9500 4900
	1    0    0    -1  
$EndComp
$Comp
L CP C6
U 1 1 5B12E6A1
P 4600 1850
F 0 "C6" H 4625 1950 50  0000 L CNN
F 1 "100uF" H 4625 1750 50  0000 L CNN
F 2 "Capacitors_THT:CP_Radial_D7.5mm_P2.50mm" H 4638 1700 50  0001 C CNN
F 3 "" H 4600 1850 50  0001 C CNN
	1    4600 1850
	1    0    0    1   
$EndComp
$Comp
L C C7
U 1 1 5B12F43D
P 4250 1850
F 0 "C7" H 4275 1950 50  0000 L CNN
F 1 "0.1u" H 4275 1750 50  0000 L CNN
F 2 "Capacitors_THT:C_Disc_D6.0mm_W2.5mm_P5.00mm" H 4288 1700 50  0001 C CNN
F 3 "" H 4250 1850 50  0001 C CNN
	1    4250 1850
	1    0    0    -1  
$EndComp
$Comp
L D D3
U 1 1 5B12FFFC
P 3750 2500
F 0 "D3" H 3750 2600 50  0000 C CNN
F 1 "D" H 3750 2400 50  0000 C CNN
F 2 "D:1S4_V" H 3750 2500 50  0001 C CNN
F 3 "" H 3750 2500 50  0001 C CNN
	1    3750 2500
	-1   0    0    1   
$EndComp
$Comp
L HT7750A U3
U 1 1 5B1304E4
P 3800 1950
F 0 "U3" H 3800 2300 60  0000 C CNN
F 1 "HT7750A" H 3800 2150 60  0000 C CNN
F 2 "TR:2N3904BU" H 3800 2300 60  0001 C CNN
F 3 "" H 3800 2300 60  0001 C CNN
	1    3800 1950
	1    0    0    1   
$EndComp
$Comp
L L_Small L1
U 1 1 5B13EE83
P 3050 2000
F 0 "L1" H 3080 2040 50  0000 L CNN
F 1 "47uH" H 3080 1960 50  0000 L CNN
F 2 "Inductors_THT:L_Radial_D8.7mm_P5.00mm_Fastron_07HCP" H 3050 2000 50  0001 C CNN
F 3 "" H 3050 2000 50  0001 C CNN
	1    3050 2000
	0    -1   -1   0   
$EndComp
$Comp
L CP C8
U 1 1 5B14AA6B
P 2750 1850
F 0 "C8" H 2775 1950 50  0000 L CNN
F 1 "47u" H 2775 1750 50  0000 L CNN
F 2 "C:25PK220MEFC6.3X11" H 2788 1700 50  0001 C CNN
F 3 "" H 2750 1850 50  0001 C CNN
	1    2750 1850
	1    0    0    1   
$EndComp
$Comp
L CP C9
U 1 1 5B12D4FB
P 2950 4800
F 0 "C9" H 2975 4900 50  0000 L CNN
F 1 "22u" H 2975 4700 50  0000 L CNN
F 2 "C:25PK220MEFC6.3X11" H 2988 4650 50  0001 C CNN
F 3 "" H 2950 4800 50  0001 C CNN
	1    2950 4800
	1    0    0    1   
$EndComp
$Comp
L Battery BT1
U 1 1 5B156B7A
P 1550 1050
F 0 "BT1" H 1650 1150 50  0000 L CNN
F 1 "Battery" H 1650 1050 50  0000 L CNN
F 2 "Battery_Holders:Keystone_2479_3xAAA" V 1550 1110 50  0001 C CNN
F 3 "" V 1550 1110 50  0001 C CNN
	1    1550 1050
	1    0    0    1   
$EndComp
$Comp
L R R8
U 1 1 5B25250D
P 5650 3250
F 0 "R8" V 5730 3250 50  0000 C CNN
F 1 "470" V 5650 3250 50  0000 C CNN
F 2 "Resistors_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" V 5580 3250 50  0001 C CNN
F 3 "" H 5650 3250 50  0001 C CNN
	1    5650 3250
	0    1    1    0   
$EndComp
$Comp
L HEADER_5 J3
U 1 1 5B0F1723
P 8700 1700
F 0 "J3" H 8700 2000 60  0000 C CNN
F 1 "PICKIT3" H 8700 1400 60  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x05_Pitch2.54mm" H 8700 1700 60  0001 C CNN
F 3 "" H 8700 1700 60  0000 C CNN
	1    8700 1700
	0    -1   -1   0   
$EndComp
$Comp
L SW_Push_Dual SW5
U 1 1 5B2639AD
P 9500 3150
F 0 "SW5" H 9550 3250 50  0000 L CNN
F 1 "Start" H 9500 2880 50  0000 C CNN
F 2 "Buttons_Switches_THT:SW_PUSH_6mm" H 9500 3350 50  0001 C CNN
F 3 "" H 9500 3350 50  0001 C CNN
	1    9500 3150
	1    0    0    -1  
$EndComp
$Comp
L C C3
U 1 1 5B277FD2
P 8500 2450
F 0 "C3" H 8525 2550 50  0000 L CNN
F 1 "0.1u" H 8525 2350 50  0000 L CNN
F 2 "Capacitors_THT:C_Disc_D6.0mm_W2.5mm_P5.00mm" H 8538 2300 50  0001 C CNN
F 3 "" H 8500 2450 50  0001 C CNN
	1    8500 2450
	1    0    0    -1  
$EndComp
$Comp
L R R9
U 1 1 5B2794A0
P 3350 5400
F 0 "R9" V 3430 5400 50  0000 C CNN
F 1 "1M" V 3350 5400 50  0000 C CNN
F 2 "Resistors_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" V 3280 5400 50  0001 C CNN
F 3 "" H 3350 5400 50  0001 C CNN
	1    3350 5400
	0    1    1    0   
$EndComp
$Comp
L TM1640 U4
U 1 1 5B2DDD18
P 5550 6650
F 0 "U4" H 5550 7550 60  0000 C CNN
F 1 "TM1640" H 5550 6000 60  0000 C CNN
F 2 "MCU_Microchip:DSPIC30F2010-20I_SO" H 5350 6900 60  0001 C CNN
F 3 "" H 5350 6900 60  0001 C CNN
	1    5550 6650
	1    0    0    -1  
$EndComp
$Comp
L SW_Push_Dual SW4
U 1 1 5B122D64
P 9500 2700
F 0 "SW4" H 9550 2800 50  0000 L CNN
F 1 "Reset" H 9500 2430 50  0000 C CNN
F 2 "Buttons_Switches_THT:SW_PUSH_6mm" H 9500 2900 50  0001 C CNN
F 3 "" H 9500 2900 50  0001 C CNN
	1    9500 2700
	1    0    0    -1  
$EndComp
NoConn ~ 6200 5850
NoConn ~ 6200 5950
NoConn ~ 6200 6050
NoConn ~ 6200 6150
NoConn ~ 6200 6250
NoConn ~ 6200 6350
NoConn ~ 6200 6450
NoConn ~ 6200 6550
NoConn ~ 6200 6650
NoConn ~ 4900 6250
NoConn ~ 4900 6150
NoConn ~ 4900 6050
NoConn ~ 4900 5950
NoConn ~ 4900 5850
$Comp
L C_Small C10
U 1 1 5B2F59C8
P 5500 5100
F 0 "C10" H 5510 5170 50  0000 L CNN
F 1 "0.1u" H 5510 5020 50  0000 L CNN
F 2 "Capacitors_THT:C_Disc_D6.0mm_W2.5mm_P5.00mm" H 5500 5100 50  0001 C CNN
F 3 "" H 5500 5100 50  0001 C CNN
	1    5500 5100
	0    1    1    0   
$EndComp
$Comp
L HDSP-K123-RESCUE-green_pomp3 U2
U 1 1 5B2F0190
P 2200 6650
F 0 "U2" H 2850 6650 60  0000 C CNN
F 1 "HDSP-K123" H 2200 6750 60  0000 C CNN
F 2 "Displays_7-Segment:HDSP-K123" H 2050 6950 60  0001 C CNN
F 3 "" H 2050 6950 60  0001 C CNN
	1    2200 6650
	1    0    0    -1  
$EndComp
Wire Wire Line
	5200 2000 5200 3250
Wire Wire Line
	2750 750  2750 1700
Wire Wire Line
	2750 1450 10100 1450
Wire Wire Line
	7450 1450 7450 2950
Wire Wire Line
	6700 2600 8700 2600
Connection ~ 5200 2000
Connection ~ 5500 3250
Wire Wire Line
	3600 3650 3900 3650
Wire Wire Line
	3900 3650 3900 4450
Wire Wire Line
	3600 4650 3600 4850
Connection ~ 3600 4650
Wire Wire Line
	3200 3150 5800 3150
Wire Wire Line
	3200 2850 4600 2850
Wire Wire Line
	4250 2000 8600 2000
Connection ~ 3600 4850
Connection ~ 3600 4950
Wire Wire Line
	1950 4950 3600 4950
Wire Wire Line
	1950 1100 1950 4950
Connection ~ 1950 1100
Connection ~ 5200 2950
Wire Wire Line
	5500 3250 5500 2300
Wire Wire Line
	8250 4600 8750 4600
Wire Wire Line
	5200 2950 5800 2950
Connection ~ 3350 4950
Wire Wire Line
	3600 3950 3600 4250
Wire Wire Line
	2500 4150 3600 4150
Connection ~ 3600 4150
Wire Wire Line
	2950 4650 3600 4650
Connection ~ 4250 2000
Wire Wire Line
	3900 2500 4250 2500
Wire Wire Line
	4250 2500 4250 2000
Connection ~ 4600 2000
Wire Wire Line
	3350 2000 3350 2500
Wire Wire Line
	3350 2500 3600 2500
Wire Wire Line
	1550 2000 2950 2000
Wire Wire Line
	3800 1600 3800 1450
Connection ~ 3800 1450
Wire Wire Line
	4250 1700 4250 1450
Connection ~ 4250 1450
Wire Wire Line
	4600 1700 4600 1450
Connection ~ 4600 1450
Wire Wire Line
	5200 1700 5200 1450
Connection ~ 5200 1450
Connection ~ 2750 2000
Wire Wire Line
	1950 750  1950 1000
Connection ~ 3350 2000
Connection ~ 1950 2000
Connection ~ 3350 4650
Connection ~ 2950 4650
Connection ~ 2950 4950
Wire Wire Line
	7450 3350 8250 3350
Wire Wire Line
	8250 3350 8250 4600
Wire Wire Line
	7450 3450 8000 3450
Wire Wire Line
	8000 3450 8000 4900
Wire Wire Line
	1550 750  2750 750 
Connection ~ 2750 1450
Wire Wire Line
	3150 2000 3350 2000
Connection ~ 2950 2000
Connection ~ 3150 2000
Wire Wire Line
	1550 850  1550 750 
Connection ~ 1950 750 
Wire Wire Line
	1550 1250 1550 2000
Wire Wire Line
	2950 4950 2950 5400
Wire Wire Line
	10100 5400 3500 5400
Connection ~ 7450 2600
Wire Wire Line
	8800 3050 7450 3050
Wire Wire Line
	8800 1800 8800 3050
Wire Wire Line
	7450 3150 9300 3150
Wire Wire Line
	8800 3650 9300 3650
Wire Wire Line
	8900 3150 8900 1800
Connection ~ 8900 3150
Wire Wire Line
	7450 3250 8800 3250
Wire Wire Line
	8800 3250 8800 3650
Wire Wire Line
	3000 2850 2800 2850
Wire Wire Line
	2500 3150 3000 3150
Wire Wire Line
	4600 2850 4600 3050
Wire Wire Line
	4600 3050 5800 3050
Wire Wire Line
	8500 2300 8500 1800
Wire Wire Line
	8700 2600 8700 1800
Wire Wire Line
	10100 1450 10100 5400
Wire Wire Line
	10100 3150 9700 3150
Wire Wire Line
	8600 2000 8600 1800
Wire Wire Line
	2800 2850 2800 3150
Connection ~ 2500 3150
Connection ~ 2800 3150
Connection ~ 10100 3650
Wire Wire Line
	9300 3150 9300 3350
Wire Wire Line
	9700 3150 9700 3350
Connection ~ 3550 2850
Connection ~ 3950 2850
Connection ~ 3950 3150
Connection ~ 3550 3150
Connection ~ 8500 2600
Connection ~ 8500 2300
Wire Wire Line
	3900 3350 5800 3350
Wire Wire Line
	4100 3450 5800 3450
Wire Wire Line
	9700 3650 10100 3650
Wire Wire Line
	9700 3650 9700 3850
Wire Wire Line
	9300 3650 9300 3850
Wire Wire Line
	7450 3550 7800 3550
Wire Wire Line
	7800 3550 7800 4450
Wire Wire Line
	2950 5400 3200 5400
Wire Wire Line
	9350 4600 10100 4600
Wire Wire Line
	8000 4900 9300 4900
Wire Wire Line
	9700 4900 10100 4900
Connection ~ 10100 4900
Connection ~ 10100 3150
Connection ~ 7450 1450
Connection ~ 1950 1000
Wire Wire Line
	2950 5200 4100 5200
Wire Wire Line
	4100 5200 4100 3450
Connection ~ 2950 5200
Wire Wire Line
	9300 4900 9300 5100
Wire Wire Line
	9700 4900 9700 5100
Connection ~ 10100 4600
Connection ~ 9350 4600
Wire Wire Line
	5800 2600 5800 3950
Wire Wire Line
	5800 2600 6500 2600
Connection ~ 5800 2950
Wire Wire Line
	4900 6650 4200 6650
Wire Wire Line
	4100 6750 4900 6750
Wire Wire Line
	3550 6850 4900 6850
Wire Wire Line
	3400 6950 4900 6950
Wire Wire Line
	3300 7050 4900 7050
Wire Wire Line
	6200 7500 6200 7150
Wire Wire Line
	6200 6850 6350 6850
Wire Wire Line
	6350 6850 6350 5550
Wire Wire Line
	6350 5550 2200 5550
Wire Wire Line
	6200 6750 6400 6750
Wire Wire Line
	6400 6750 6400 5650
Wire Wire Line
	6400 5650 2300 5650
Wire Wire Line
	2500 750  2500 4150
Wire Wire Line
	4750 6350 4900 6350
Wire Wire Line
	4750 5100 4750 6350
Connection ~ 4750 5400
Wire Wire Line
	6500 6950 6200 6950
Wire Wire Line
	6500 3950 6500 6950
Wire Wire Line
	5800 3950 6500 3950
Wire Wire Line
	5500 2300 9100 2300
Connection ~ 10100 2700
Wire Wire Line
	9100 2300 9100 2700
Wire Wire Line
	9100 2700 9300 2700
Wire Wire Line
	9300 2700 9300 2900
Wire Wire Line
	9700 2700 9700 2900
Wire Wire Line
	9700 2700 10100 2700
Wire Wire Line
	6200 7050 6300 7050
Wire Wire Line
	6300 7050 6300 7550
Wire Wire Line
	6300 7550 2100 7550
Wire Wire Line
	4900 6450 4650 6450
Wire Wire Line
	4450 6550 4900 6550
Connection ~ 2500 750 
Wire Wire Line
	4750 5100 5400 5100
Wire Wire Line
	5600 5100 6500 5100
Connection ~ 6500 5100
Wire Wire Line
	4450 3550 5800 3550
Wire Wire Line
	4450 3550 4450 6550
Wire Wire Line
	2000 5850 4200 5850
Wire Wire Line
	4200 5850 4200 6650
Wire Wire Line
	4100 5900 4100 6750
Wire Wire Line
	2100 5900 4100 5900
Wire Wire Line
	2100 5900 2100 6000
Wire Wire Line
	3550 7300 3550 6850
Wire Wire Line
	2000 7300 3550 7300
Wire Wire Line
	2000 7300 2000 7100
Wire Wire Line
	3400 7350 3400 6950
Wire Wire Line
	1900 7350 3400 7350
Wire Wire Line
	1900 7350 1900 7100
Wire Wire Line
	3300 7400 3300 7050
Wire Wire Line
	1800 7400 3300 7400
Wire Wire Line
	1800 7400 1800 7100
Wire Wire Line
	1800 6000 1800 6000
Wire Wire Line
	2200 5550 2200 6000
Wire Wire Line
	2100 7550 2100 7100
Wire Wire Line
	2600 6000 2600 5900
Connection ~ 2600 5900
Wire Wire Line
	2200 7100 2200 7400
Connection ~ 2200 7400
Wire Wire Line
	2300 7100 2300 7350
Connection ~ 2300 7350
Wire Wire Line
	2500 7100 2500 7300
Connection ~ 2500 7300
Wire Wire Line
	2400 7100 2400 7500
Connection ~ 2400 7500
Wire Wire Line
	2600 7100 2600 7550
Connection ~ 2600 7550
Wire Wire Line
	2300 5650 2300 6000
Wire Wire Line
	2000 6000 2000 5850
Wire Wire Line
	2500 6000 2500 5850
Connection ~ 2500 5850
Wire Wire Line
	4900 7150 4000 7150
Wire Wire Line
	4000 7150 4000 5950
Wire Wire Line
	4000 5950 1800 5950
Wire Wire Line
	1800 5950 1800 6000
Wire Wire Line
	2400 6000 2400 5950
Connection ~ 2400 5950
Wire Wire Line
	6200 7500 1650 7500
Wire Wire Line
	1650 7500 1650 5850
Wire Wire Line
	1650 5850 1900 5850
Wire Wire Line
	1900 5850 1900 6000
Wire Wire Line
	4650 6450 4650 4450
Wire Wire Line
	4650 4450 7800 4450
$EndSCHEMATC
