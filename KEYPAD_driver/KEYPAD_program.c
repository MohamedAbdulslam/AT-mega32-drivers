/*
 * KEYPAD_program.c
 *
 * Created: 3/10/2023 10:44:40 AM
 *  Author: mohamed abdelslam
 */ 

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "DIO_private.h"
#include "KEYPAD_interface.h"
#include "KEYPAD_config.h"


void HKEYPAD_voidInit(void)
{
   /* define first four pins as output pins */
   MDIO_voidSetPinDirection(KEYPAD_PORT,0,OUTPUT);	
   MDIO_voidSetPinDirection(KEYPAD_PORT,1,OUTPUT);
   MDIO_voidSetPinDirection(KEYPAD_PORT,2,OUTPUT);
   MDIO_voidSetPinDirection(KEYPAD_PORT,3,OUTPUT);
   /* define second four pins as input pins */
   MDIO_voidSetPinDirection(KEYPAD_PORT,4,INPUT);
   MDIO_voidSetPinDirection(KEYPAD_PORT,5,INPUT);
   MDIO_voidSetPinDirection(KEYPAD_PORT,6,INPUT);
   MDIO_voidSetPinDirection(KEYPAD_PORT,7,INPUT); 
   /* Enable internal pull up for input pins */
   MDIO_voidEnablePullUp(KEYPAD_PORT,4);  
   MDIO_voidEnablePullUp(KEYPAD_PORT,5); 
   MDIO_voidEnablePullUp(KEYPAD_PORT,6); 
   MDIO_voidEnablePullUp(KEYPAD_PORT,7); 
}

u8 HKEYPAD_u8Read(void)
{
 u8 arr[4][4]={{'7','8','9','/'},{'4','5','6','*'},{'1','2','3','-'},{'A','0','=','+'}};
 u8 row,coloumn,x;
 u8 returnval=0xff;
 for(row=0;row<4;row++)
 {
	 MDIO_voidSetPinValue(DIOD,0,1);
	 MDIO_voidSetPinValue(DIOD,1,1);
	 MDIO_voidSetPinValue(DIOD,2,1);
	 MDIO_voidSetPinValue(DIOD,3,1);
	 MDIO_voidSetPinValue(DIOD,row,0);
	 
	 for(coloumn=0;coloumn<4;coloumn++)
	 {
		 x=MDIO_u8GetPinValue(DIOD,(coloumn+4));
		 if(x==0)
		 {
			 returnval=arr[row][coloumn];
			 break;
		 }
	 }
	 if(x==0)
	 {
		 break;
	 }
 }
 return returnval ;
		
}