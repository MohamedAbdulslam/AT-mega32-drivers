/*
 * SPI_program.c
 *
 * Created: 4/13/2023 3:03:41 PM
 *  Author: mohamed abdelslam
 */ 

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#define F_CPU 8000000UL
#include "DELAY.h"
#include "DIO_interface.h"
#include "SPI_interface.h"
#include "SPI_private.h"
#include "SPI_config.h"



void MSPI_voidInit(void)
{
	/* Configure SPI mode */
	#if SPI_MODE == SPI_MASTER 
    SET_BIT(SPCR,4); 
	MDIO_voidSetPinDirection(DIOB,PIN4,OUTPUT); // set SS pin as output pin
	MDIO_voidSetPinDirection(DIOB,PIN5,OUTPUT); // set MOSI pin as output pin
	MDIO_voidSetPinDirection(DIOB,PIN7,OUTPUT); // set SCK pin as output pin
	MDIO_voidSetPinValue(DIOB,PIN4,HIGH);  
	#elif   SPI_MODE == SPI_SLAVE
	CLR_BIT(SPCR,4);  
	MDIO_voidSetPinDirection(DIOB,PIN6,OUTPUT); // set MISO pin as output pin
    #endif
	/* Enable SPI */
	SET_BIT(SPCR,PIN6);
	/* Configure data order */
	#if      SPI_DATA_ORDER == LSB_FIRST 
	SET_BIT(SPCR,PIN5);
	#elif    SPI_DATA_ORDER == MSB_FIRST
	CLR_BIT(SPCR,PIN5);
	#endif
	
	/* Configure SPI clock */
	#if     SPI_CLOCK == CLK_FREQ_DIV_BY_2
	CLR_BIT(SPCR,0);
	CLR_BIT(SPCR,1);
	SET_BIT(SPSR,0);
	#elif   SPI_CLOCK == CLK_FREQ_DIV_BY_4
	CLR_BIT(SPCR,0);
	CLR_BIT(SPCR,1);
	CLR_BIT(SPSR,0);
	#elif   SPI_CLOCK == CLK_FREQ_DIV_BY_8
	SET_BIT(SPCR,0);
	CLR_BIT(SPCR,1);
	SET_BIT(SPSR,0);
	#elif   SPI_CLOCK == CLK_FREQ_DIV_BY_16
	SET_BIT(SPCR,0);
	CLR_BIT(SPCR,1);
	CLR_BIT(SPSR,0);
	#elif   SPI_CLOCK == CLK_FREQ_DIV_BY_32
	CLR_BIT(SPCR,0);
	SET_BIT(SPCR,1);
	SET_BIT(SPSR,0);
	#elif   SPI_CLOCK == CLK_FREQ_DIV_BY_64
	SET_BIT(SPCR,0);
	SET_BIT(SPCR,1);
	SET_BIT(SPSR,0);
	#elif   SPI_CLOCK == CLK_FREQ_DIV_BY_128
	CLR_BIT(SPCR,0);
	SET_BIT(SPCR,1);
	SET_BIT(SPSR,0);
	#endif
	
	/* Configure SPI polarity */
	#if      SPI_CLOCK_POLARITY == LEADING_IS_RISING
	CLR_BIT(SPCR,3);
	#elif    SPI_CLOCK_POLARITY == LEADING_IS_FALLING
	SET_BIT(SPCR,3);
	#endif
	/* Configure SPI clock phase */
	#if     SPI_CLOCK_PHASE == SAMPLE_AT_LEADING
	CLR_BIT(SPCR,2);
	#elif   SPI_CLOCK_PHASE == SETUP_AT_LEADING
	SET_BIT(SPCR,2);
	#endif
}

void MSPI_u8SendChar(u8 Copy_u8Data)
{
	/* clear SS to send data */
	MDIO_voidSetPinValue(DIOB,PIN4,LOW); 
	/* store data in SPDR register */
	SPDR=Copy_u8Data;
	/* Wait while sending  is complete */
	while(GET_BIT(SPSR,7)==0);
	
}

u8 MSPI_u8RecieveChar(void)
{
	while(GET_BIT(SPSR,7)==0); /* Wait while sending  is complete */
	return SPDR;
}

void MSPI_voidSendString(u8 *Copy_u8Ptrstring)
{
	while( (*Copy_u8Ptrstring)!='\0' )
	{
		MSPI_u8SendChar(*Copy_u8Ptrstring);
		Delay_ms(300);
		Copy_u8Ptrstring++;
	}
}