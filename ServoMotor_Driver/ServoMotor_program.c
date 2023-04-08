/*
 * ServoMotor_program.c
 *
 * Created: 4/8/2023 2:09:33 AM
 *  Author: mohamed abdelslam
 */ 
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#define F_CPU 1000000UL
#include "DELAY.h"
#include "DIO_interface.h"
#include "Timer_interface.h"
#include "Timer_private.h"
#include "ServoMotor_interface.h"
#include "ServoMotor_config.h"
#include "ServoMotor_private.h"


void HSERVO_voidInit(void)
{
	/* Set servo pin as output pin */
	MDIO_voidSetPinDirection(DIOD,SERVO_PIN,OUTPUT);
	MTIMER1_voidInit();
	ICR1=19999; // to implement duty cycle with 20ms time period (20000*tick_time(==1ms) )
}

void HSERVO_voidRotate(f32 Copy_f32Angle)
{
	if ( (Copy_f32Angle>=MINIMUM_ANGLE) && (Copy_f32Angle<=MAXIMUM_ANGLE) )
	{
		if (Copy_f32Angle==-90)
		{
			OCR1A=1000;
		}
		else if (Copy_f32Angle==0)
		{
			OCR1A=1500;
			
		}
		else if (Copy_f32Angle==90)
		{
			OCR1A=2000;
		}
	}
}