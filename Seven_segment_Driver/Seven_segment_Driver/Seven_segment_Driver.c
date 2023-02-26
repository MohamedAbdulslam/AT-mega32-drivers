/*
 * Seven_segment_Driver.c
 *
 * Created: 2/25/2023 2:32:33 PM
 *  Author: mohamed abdelslam
 */ 


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#define F_CPU 8000000UL
#include "DELAY.h"
#include "DIO_interface.h"
#include "Sevensegment_interface.h"
#include "Sevensegment_config.h"
#include "Sevensegment_private.h"
int main(void)
{
	HSEVSEG_voidInit(DIOD);
	
    while(1)
    {
        HSEVSEG_voidWrite(DIOD,4);
		Delay_ms(1000);
		HSEVSEG_voidWrite(DIOD,8);
		Delay_ms(1000);
    }
}