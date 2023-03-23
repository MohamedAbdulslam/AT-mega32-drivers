/*
 * ADC_driver.c
 *
 * Created: 3/23/2023 10:35:20 AM
 *  Author: mohamed abdelslam
 */ 

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#define F_CPU 8000000UL
#include "DELAY.h"
#include "DIO_interface.h"
#include "ADC_interface.h"
#include "ADC_private.h"
#include "ADC_config.h"


int main(void)
{
	MADC_voidInit();
	MDIO_voidSetPinDirection(DIOD,0,OUTPUT);
	MDIO_voidSetPinDirection(DIOD,1,OUTPUT);
	MDIO_voidSetPinDirection(DIOD,2,OUTPUT);
	MDIO_voidSetPinDirection(DIOD,3,OUTPUT);
	MDIO_voidSetPinDirection(DIOD,4,OUTPUT);
	MDIO_voidSetPinDirection(DIOD,5,OUTPUT);
	MDIO_voidSetPinDirection(DIOD,6,OUTPUT);
	MDIO_voidSetPinDirection(DIOD,7,OUTPUT);
	
    while(1)
    {
        MDIO_voidSetPortValue(DIOD,MADC_u16Read());
    }
}