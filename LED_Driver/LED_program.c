/*
 * LED_program.c
 *
 * Created: 2/19/2023 1:10:54 PM
 *  Author: mohamed abdelslam
 */ 


#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"


void HLED_voidInit(u8 Copy_u8Port,u8 Copy_u8pin)
{
	MDIO_voidSetPinDirection(Copy_u8Port,Copy_u8pin,OUTPUT);
}
void HLED_voidLED_ON(u8 Copy_u8Port,u8 Copy_u8pin)
{
	MDIO_voidSetPinValue(Copy_u8Port,Copy_u8pin,HIGH);
}
void HLED_voidLED_OFF(u8 Copy_u8Port,u8 Copy_u8pin)
{
	MDIO_voidSetPinValue(Copy_u8Port,Copy_u8pin,LOW);
}
u8 HLED_u8GetLEDstatus(u8 Copy_u8Port,u8 Copy_u8pin)
{
	return GET_BIT(Copy_u8Port,Copy_u8pin);
}
void HLED_voidToggleLED(u8 Copy_u8Port,u8 Copy_u8pin)
{
	TOG_BIT(Copy_u8Port,Copy_u8pin);
}