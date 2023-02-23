/*
 * DIO_driver.c
 *
 * Created: 2/2/2023 9:42:25 AM
 *  Author: mohamed abdelslam
 */ 
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#define F_CPU 8000000UL
#include "DELAY.h"
#include "DIO_interface.h"
#include "DIO_private.h"
#include "DIO_config.h"
int main(void)
{
	MDIO_voidSetPinDirection(DIOD,PIN3,OUTPUT);
	
    while(1)
    {
	MDIO_voidSetPinValue(DIOD,PIN3,HIGH);
	Delay_ms(1000);
	MDIO_voidSetPinValue(DIOD,PIN3,LOW);
	Delay_ms(1000);

    }
}