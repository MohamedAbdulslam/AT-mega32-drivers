/*
 * EEPROM_Driver.c
 *
 * Created: 3/1/2023 9:58:51 AM
 *  Author: mohamed abdelslam
 */ 

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "EEPROM_interface.h"


int main(void)
{
	MEEPROM_voidWrite(0X0063,0X52);
    while(1)
    {
        //TODO:: Please write your application code 
    }
}