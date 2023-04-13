/*
 * SPI_config.h
 *
 * Created: 4/13/2023 3:04:32 PM
 *  Author: mohamed abdelslam
 */ 


#ifndef SPI_CONFIG_H_
#define SPI_CONFIG_H_


/* Specify SPI data order -- LSB_FIRST or MSB_FIRST */
#define SPI_DATA_ORDER            LSB_FIRST

/* Specify SPI mode -- SPI_MASTER or SPI_SLAVE */
#define SPI_MODE          SPI_MASTER    

/* Specify SPI Baud rate or clock prescaler */
#define SPI_CLOCK                 CLK_FREQ_DIV_BY_16

/* Specify SPI clock polarity-- LEADING_IS_RISING or LEADING_IS_FALLING */
#define SPI_CLOCK_POLARITY         LEADING_IS_RISING

/* Specify SPI clock phase -- SAMPLE_AT_LEADING or SETUP_AT_LEADING */ 
#define SPI_CLOCK_PHASE           SAMPLE_AT_LEADING 
#endif /* SPI_CONFIG_H_ */