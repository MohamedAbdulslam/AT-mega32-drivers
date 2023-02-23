/*
 * LED_Driver.c
 *
 * Created: 2/19/2023 1:10:09 PM
 *  Author: mohamed abdelslam
 */ 

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#define F_CPU 8000000UL
#include "DELAY.h"
#include "DIO_interface.h"
#include "LED_interface.h"

int main(void)
{
	HLED_voidInit(DIOD,PIN3);
    while(1)
    {
         HLED_voidLED_ON(DIOD,PIN3);
		 Delay_ms(10000);
		 HLED_voidLED_OFF(DIOD,PIN3);
		 Delay_ms(10000);
    }
}