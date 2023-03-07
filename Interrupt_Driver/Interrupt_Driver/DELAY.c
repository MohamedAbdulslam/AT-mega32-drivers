/*
 * DELAY.c
 *
 * Created: 2/19/2023 11:50:08 AM
 *  Author: mohamed abdelslam
 */ 
#include "STD_TYPES.h"
#include "DELAY.h"

#ifndef F_CPU
/* prevent compiler error by supplying a default */
# warning "F_CPU not defined for <util/delay.h>"
# define F_CPU 1000000UL
#endif

void Delay_ms(f64 period)
{
	u32 i;
	u32 counter=( ( period /1000) * F_CPU )/2;
	for (i=0;i<counter;i++)
	{
		
	}
	
}

void Delay_us(f64 period)
{
	u32 i;
	u32 counter=( ( period /1000000) * F_CPU )/2;
	for (i=0;i<counter;i++)
	{
		
	}
	
}