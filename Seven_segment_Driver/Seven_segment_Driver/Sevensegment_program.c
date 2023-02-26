/*
 * Sevensegment_program.c
 *
 * Created: 2/25/2023 2:33:52 PM
 *  Author: mohamed abdelslam
 */ 

#include "STD_TYPES.h"
#include "DIO_interface.h"
#include "Sevensegment_interface.h"
#include "Sevensegment_config.h"
void HSEVSEG_voidInit(u8 Copy_u8Port)
{
	MDIO_voidSetPortDirection(Copy_u8Port,OUTPUT);
}

void HSEVSEG_voidWrite(u8 Copy_u8Port,u8 Copy_u8Value)
{
 #if   SEVEN_SEG_TYPE == SEVEN_SEGMENT_CC 
 u8 numbers[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x47,0x7f,0x6f};
 MDIO_voidSetPortValue(Copy_u8Port,numbers[Copy_u8Value]);
 #elif SEVEN_SEG_TYPE == SEVEN_SEGMENT_CA
 u8 numbers[10]={~0x3f,~0x06,~0x5b,~0x4f,~0x66,~0x6d,~0x7d,~0x47,~0x7f,~0x6f};
 MDIO_voidSetPortValue(Copy_u8Port,numbers[Copy_u8Value]);
 #endif 
}
