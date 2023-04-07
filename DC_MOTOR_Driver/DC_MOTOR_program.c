/*
 * DC_MOTOR_program.c
 *
 * Created: 4/7/2023 3:08:16 PM
 *  Author: mohamed abdelslam
 */ 
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "DC_MOTOR_interface.h"
#include "DC_MOTOR_config.h"
#include "DC_MOTOR_private.h"
void HDC_Init(u8 Copy_u8MotorPort,u8 Copy_u8MotorTerminal1Pin,u8 Copy_u8MotorTerminal2Pin)
{
  	switch(Copy_u8MotorPort)
	{
	   case DIOA : 
	   MDIO_voidSetPinDirection(DIOA,Copy_u8MotorTerminal1Pin,OUTPUT);
	   MDIO_voidSetPinDirection(DIOA,Copy_u8MotorTerminal2Pin,OUTPUT);
	   break;
	   case DIOB :
	   MDIO_voidSetPinDirection(DIOB,Copy_u8MotorTerminal1Pin,OUTPUT);
	   MDIO_voidSetPinDirection(DIOB,Copy_u8MotorTerminal2Pin,OUTPUT);
	   break;
	   case DIOC :
	   MDIO_voidSetPinDirection(DIOC,Copy_u8MotorTerminal1Pin,OUTPUT);
	   MDIO_voidSetPinDirection(DIOC,Copy_u8MotorTerminal2Pin,OUTPUT);
	   break;
	   case DIOD :
	   MDIO_voidSetPinDirection(DIOD,Copy_u8MotorTerminal1Pin,OUTPUT);
	   MDIO_voidSetPinDirection(DIOD,Copy_u8MotorTerminal2Pin,OUTPUT);
	   break;
	   default:	
	   /* return error  */
	   break;  
    }
	  
}

void HDC_RotateCW(u8 Copy_u8MotorPort,u8 Copy_u8MotorTerminal1Pin,u8 Copy_u8MotorTerminal2Pin)
{
	// Terminal 1  of the DC motor will be connected to high pin and Terminal 2 to low pin 
	switch(Copy_u8MotorPort)
	{
		case DIOA :
		MDIO_voidSetPinValue(DIOA,Copy_u8MotorTerminal1Pin,HIGH);
		MDIO_voidSetPinValue(DIOA,Copy_u8MotorTerminal2Pin,LOW);
		break;
        case DIOB :
        MDIO_voidSetPinValue(DIOB,Copy_u8MotorTerminal1Pin,HIGH);
        MDIO_voidSetPinValue(DIOB,Copy_u8MotorTerminal2Pin,LOW);
        break;
		case DIOC :
		MDIO_voidSetPinValue(DIOC,Copy_u8MotorTerminal1Pin,HIGH);
		MDIO_voidSetPinValue(DIOC,Copy_u8MotorTerminal2Pin,LOW);
		break;
		case DIOD :
		MDIO_voidSetPinValue(DIOD,Copy_u8MotorTerminal1Pin,HIGH);
		MDIO_voidSetPinValue(DIOD,Copy_u8MotorTerminal2Pin,LOW);
		break;
		default:
		/* return error  */
		break;
	}
}
void HDC_RotateCCW(u8 Copy_u8MotorPort,u8 Copy_u8MotorTerminal1Pin,u8 Copy_u8MotorTerminal2Pin)
{
	// Terminal 1  of the DC motor will be connected to LOW pin and Terminal 2 to HIGH pin
	switch(Copy_u8MotorPort)
	{
		case DIOA :
		MDIO_voidSetPinValue(DIOA,Copy_u8MotorTerminal1Pin,LOW);
		MDIO_voidSetPinValue(DIOA,Copy_u8MotorTerminal2Pin,HIGH);
		break;
		case DIOB :
		MDIO_voidSetPinValue(DIOB,Copy_u8MotorTerminal1Pin,LOW);
		MDIO_voidSetPinValue(DIOB,Copy_u8MotorTerminal2Pin,HIGH);
		break;
		case DIOC :
		MDIO_voidSetPinValue(DIOC,Copy_u8MotorTerminal1Pin,LOW);
		MDIO_voidSetPinValue(DIOC,Copy_u8MotorTerminal2Pin,HIGH);
		break;
		case DIOD :
		MDIO_voidSetPinValue(DIOD,Copy_u8MotorTerminal1Pin,LOW);
		MDIO_voidSetPinValue(DIOD,Copy_u8MotorTerminal2Pin,HIGH);
		break;
		default:
		/* return error  */
		break;
	}
	
}

void HDC_voidStopMotor(u8 Copy_u8MotorPort,u8 Copy_u8MotorTerminal1Pin,u8 Copy_u8MotorTerminal2Pin)
{
	switch(Copy_u8MotorPort)
	{
		case DIOA :
		MDIO_voidSetPinValue(DIOA,Copy_u8MotorTerminal1Pin,LOW);
		MDIO_voidSetPinValue(DIOA,Copy_u8MotorTerminal2Pin,LOW);
		break;
		case DIOB :
		MDIO_voidSetPinValue(DIOB,Copy_u8MotorTerminal1Pin,LOW);
		MDIO_voidSetPinValue(DIOB,Copy_u8MotorTerminal2Pin,LOW);
		break;
		case DIOC :
		MDIO_voidSetPinValue(DIOC,Copy_u8MotorTerminal1Pin,LOW);
		MDIO_voidSetPinValue(DIOC,Copy_u8MotorTerminal2Pin,LOW);
		break;
		case DIOD :
		MDIO_voidSetPinValue(DIOD,Copy_u8MotorTerminal1Pin,LOW);
		MDIO_voidSetPinValue(DIOD,Copy_u8MotorTerminal2Pin,LOW);
		break;
		default:
		/* return error  */
		break;
	}
	
}
