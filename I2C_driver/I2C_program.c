/*
 * I2C_program.c
 *
 * Created: 4/15/2023 3:02:44 PM
 *  Author: mohamed abdelslam
 */ 

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#define F_CPU 8000000UL
#include "DELAY.h"
#include "I2C_interface.h"
#include "I2C_private.h"
#include "I2C_config.h"

void MI2C_voidMasterInit(u32 Copy_u32Clock)
{
	TWBR = (u8)( ( (F_CPU/Copy_u32Clock)-16 )/(2*I2C_PRESCALER)  );
	if(I2C_PRESCALER==1)
	{
		CLR_BIT(TWSR,0);
		CLR_BIT(TWSR,1);
	}
	else if (I2C_PRESCALER==4)
	{
		SET_BIT(TWSR,0);
		CLR_BIT(TWSR,1);
	}
	else if (I2C_PRESCALER==16)
	{
		CLR_BIT(TWSR,0);
		SET_BIT(TWSR,1);
	}
	else if (I2C_PRESCALER==64)
	{
		SET_BIT(TWSR,0);
		SET_BIT(TWSR,1);
	}
	else
	{
		/* error */
	}
	
}

void MI2C_voidStart(void)
{
	TWCR=(1<<7)|(1<<2)|(1<<5); // clear TWI interrupt flag && enable I2C && send start condition
	while (GET_BIT(TWCR,7)==0); // wait until the flag is risen
	while( (TWSR & 0xF8)!=0x08 ); // wait until the start condition is transmitted
	
}

void MI2C_voidWriteAddress(u8 Copy_u8Address)
{
	TWDR=Copy_u8Address;
	TWCR=(1<<7)|(1<<2); // clear TWI interrupt flag && enable I2C 
	while (GET_BIT(TWCR,7)==0); // wait until the flag is risen
	while( (TWSR&0xF8)!=0x18 ); // wait until ( SLA + W ) has been transmitted
	
}

void MI2C_voidWriteData(u8 Copy_u8Data)
{
	TWDR=Copy_u8Data;
	TWCR=(1<<7)|(1<<2); // clear TWI interrupt flag && enable I2C 
	while (GET_BIT(TWCR,7)==0); // wait until the flag is risen
	while( (TWSR&0xF8)!=0x28 ); // wait until data has been transmitted and ACK has been received
}

void MI2C_voidStop(void)
{
     TWCR=(1<<7)|(1<<2)|(1<<4); // clear TWI interrupt flag && enable I2C && send stop condition
}
void MI2C_voidSetAddress(u8 Copy_u8Address)
{
	TWAR=Copy_u8Address; // set device address
}

u8 MI2C_u8Read(void)
{
    TWCR=(1<<7)|(1<<2)|(1<<6); // clear TWI interrupt flag && enable I2C && enable ACK
	while (GET_BIT(TWCR,7)==0); // wait until the flag is risen
	while( (TWSR&0xF8)!=0x60 ); // wait until ( SLA + W ) has been received and ACK has been returned
	TWCR=(1<<7)|(1<<2)|(1<<6); // clear TWI interrupt flag && enable I2C && enable ACK
	while (GET_BIT(TWCR,7)==0); // wait until the flag is risen
	while( (TWSR&0xF8)!=0x80 ); // previously addressed with own SLA + W, data has been received ACK has been returned
	return TWDR;
}