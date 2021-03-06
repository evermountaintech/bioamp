/*
 * Definitions_ADS1299.h
 *
 *  Created on: 9/11/2015
 *      Author: alumno
 */

#ifndef BIOAMP_V1_1_0_INC_DEFINITIONS_ADS1299_H_
#define BIOAMP_V1_1_0_INC_DEFINITIONS_ADS1299_H_

/** @defgroup Definitions_ADS1299
 *  @ingroup "Biopoteciales-LIRINS"
 *  Set of definitions used for controlling the ADS1299.
 *  @{
 */

//PIN CONNECTIONS
#define ADS_DRDY_PIN	12	// ADS data ready pin
#define ADS_DRDY_PORT	2	// ADS data ready port

#define ADS_RST_PIN	    8	// ADS reset pin
#define ADS_RST_PORT	2	// ADS reset port

#define ADS_START_PIN	9	// ADS reset pin
#define ADS_START_PORT	2	// ADS reset port

#define BOARD_ADS_PIN	16 //Master ADS chip select pin
#define BOARD_ADS_PORT  0  //Master ADS chip select port

#define SLAVE_ADS_PIN	28 // Slave ADS chip select pin
#define SLAVE_ADS_PORT  1  //Slave ADS chip select port

#define BOARD_ADS	1 	// ADS chip select
#define SLAVE_ADS	2   // ADS Daisy chip select
#define BOTH_ADS	3	// Slave Select Both ADS chips


//ADS1299 SPI Command Definition Byte Assignments
#define _WAKEUP 0x02 // Wake-up from standby mode
#define _STANDBY 0x04 // Enter Standby mode
#define _RESET 0x06 // Reset the device registers to default
#define _START 0x08 // Start and restart (synchronize) conversions
#define _STOP 0x0A // Stop conversion
#define _RDATAC 0x10 // Enable Read Data Continuous mode (default mode at power-up)
#define _SDATAC 0x11 // Stop Read Data Continuous mode
#define _RDATA 0x12 // Read data by command; supports multiple read back

//ASD1299 Register Addresses
#define ADS_ID	0x3E	// product ID for ADS1299
#define ID_REG  0x00	// this register contains ADS_ID
#define CONFIG1 0x01
#define CONFIG2 0x02
#define CONFIG3 0x03
#define LOFF 0x04
#define CH1SET 0x05
#define CH2SET 0x06
#define CH3SET 0x07
#define CH4SET 0x08
#define CH5SET 0x09
#define CH6SET 0x0A
#define CH7SET 0x0B
#define CH8SET 0x0C
#define BIAS_SENSP 0x0D
#define BIAS_SENSN 0x0E
#define LOFF_SENSP 0x0F
#define LOFF_SENSN 0x10
#define LOFF_FLIP 0x11
#define LOFF_STATP 0x12
#define LOFF_STATN 0x13
#define GPIO 0x14
#define MISC1 0x15
#define MISC2 0x16
#define CONFIG4 0x17

#define OUTPUT_NOTHING (0)  // quiet
#define OUTPUT_8_CHAN (1)   // not using Daisy module
#define OUTPUT_16_CHAN (2)  // using Daisy module
#define ON_BOARD	(8)			  // slave address for on board ADS
#define ON_DAISY	(3)				// slave address for daisy ADS
// CHANNEL SETTINGS
#define POWER_DOWN      (0)
#define GAIN_SET        (1)
#define INPUT_TYPE_SET  (2)
#define BIAS_SET        (3)
#define SRB2_SET        (4)
#define SRB1_SET        (5)
#define YES      	(0x01)
#define NO      	(0x00)

//gainCode choices
#define ADS_GAIN01 (0b00000000)	// 0x00
#define ADS_GAIN02 (0b00010000)	// 0x10
#define ADS_GAIN04 (0b00100000)	// 0x20
#define ADS_GAIN06 (0b00110000)	// 0x30
#define ADS_GAIN08 (0b01000000)	// 0x40
#define ADS_GAIN12 (0b01010000)	// 0x50
#define ADS_GAIN24 (0b01100000)	// 0x60

//inputType choices
#define ADSINPUT_NORMAL (0b00000000)
#define ADSINPUT_SHORTED (0b00000001)
#define ADSINPUT_BIAS_MEAS (0b00000010)
#define ADSINPUT_MVDD (0b00000011)
#define ADSINPUT_TEMP (0b00000100)
#define ADSINPUT_TESTSIG (0b00000101)
#define ADSINPUT_BIAS_DRP (0b00000110)
#define ADSINPUT_BIAL_DRN (0b00000111)

//test signal choices...ADS1299 datasheet page 41
#define ADSTESTSIG_AMP_1X (0b00000000)
#define ADSTESTSIG_AMP_2X (0b00000100)
#define ADSTESTSIG_PULSE_SLOW (0b00000000)
#define ADSTESTSIG_PULSE_FAST (0b00000001)
#define ADSTESTSIG_DCSIG (0b00000011)
#define ADSTESTSIG_NOCHANGE (0b11111111)

//Lead-off signal choices
#define LOFF_MAG_6NA (0b00000000)
#define LOFF_MAG_24NA (0b00000100)
#define LOFF_MAG_6UA (0b00001000)
#define LOFF_MAG_24UA (0b00001100)
#define LOFF_FREQ_DC (0b00000000)
#define LOFF_FREQ_7p8HZ (0b00000001)
#define LOFF_FREQ_31p2HZ (0b00000010)
#define LOFF_FREQ_FS_4 (0b00000011)
#define PCHAN (0)
#define NCHAN (1)
#define OFF (0)
#define ON (1)

// used for channel settings
#define ACTIVATE_SHORTED (2)
#define ACTIVATE (1)
#define DEACTIVATE (0)

#define PCKT_START 0xA0	// prefix for data packet error checking
#define PCKT_END 0xC0	// postfix for data packet error checking

// daisy module
#define CLK_EN	5


#define SAMPLE_RATE_16kHZ		0x00  //(b00000000)	// 16kHz sample rate
#define SAMPLE_RATE_8kHZ		0x01  //(b00000001)	// 8kHz sample rate
#define SAMPLE_RATE_4kHZ		0x02  //(b00000010)	// 4kHz sample rate
#define SAMPLE_RATE_2kHZ		0x03  //(b01000011)	// 2kHz sample rate
#define SAMPLE_RATE_1kHZ		0x04  //(b00000100)	// 1kHz sample rate
#define SAMPLE_RATE_500HZ		0x05  //(b00000101)	// 500Hz sample rate
#define SAMPLE_RATE_250HZ		0x06  //(b00000110)	// 250Hz sample rate


#define bitSet(value, bit) ((value) |= (1UL << (bit)))
#define bitClear(value, bit) ((value) &= ~(1UL << (bit)))
#define bitRead(value, bit) (((value) >> (bit)) & 0x01)
//#define bitWrite(value, bit, bitvalue) (bitvalue ? bitSet(value, bit) : bitClear(value, bit))

/**
 * @}
 */

#endif /* BIOAMP_V1_1_0_INC_DEFINITIONS_ADS1299_H_ */
