/*
 * LCD_program.c
 *
 * Created: 3/8/2023 11:59:59 AM
 *  Author: mohamed abdelslam
 */ 
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#define F_CPU 8000000UL
#include "DELAY.h"
#include "DIO_interface.h"
#include "LCD_interface.h"
#include "LCD_config.h"

void HLCD_voidInit(void)
{
	/* WAIT 400MS */
	Delay_ms(400);
	/* define EN , RS , RW as output pins */
    MDIO_voidSetPinDirection(DIOB,EN,OUTPUT);
	MDIO_voidSetPinDirection(DIOB,RS,OUTPUT);
	MDIO_voidSetPinDirection(DIOB,RW,OUTPUT);
   #if   LCD_MODE == EIGHT_BITS_MODE
   /* define lcd port as output */
   MDIO_voidSetPortDirection(LCD_PORT,OUTPUT);  
   MDIO_voidSetPinValue(DIOB,RW,LOW); // set RW BIN WITH 0 TO WRITE
   HLCD_voidSendCommand(EIGHT_BITS_CMD);  // to set the LCD at eight bit mode
   Delay_ms(4);
   HLCD_voidSendCommand(DISPLAY_ON_CURSOR_ON); 
   Delay_ms(4);
   HLCD_voidSendCommand(CLR_SCREEN_CMD);
   Delay_ms(20);
   HLCD_voidSendCommand(ENTRY_MODE_CMD);
   Delay_ms(4);  
 
   #else LCD_MODE == FOUR_BITS_MODE
   MDIO_voidSetPinDirection(LCD_PORT,4,OUTPUT);
   MDIO_voidSetPinDirection(LCD_PORT,5,OUTPUT);
   MDIO_voidSetPinDirection(LCD_PORT,6,OUTPUT);
   MDIO_voidSetPinDirection(LCD_PORT,7,OUTPUT);
   MDIO_voidSetPinValue(DIOB,RW,LOW); // set RW BIN WITH 0 TO WRITE
   HLCD_voidSendCommand(RETURN_HOME_CMD);
   Delay_ms(20);
   HLCD_voidSendCommand(FOUR_BITS_CMD);
   Delay_ms(4);
   HLCD_voidSendCommand(DISPLAY_ON_CURSOR_ON);
   Delay_ms(4);
   HLCD_voidSendCommand(CLR_SCREEN_CMD);
   Delay_ms(20);
   HLCD_voidSendCommand(ENTRY_MODE_CMD);
   Delay_ms(4);
   
   
   #endif
   
}

 void HLCD_voidSendFallingEdge(u8 Copy_u8Port)
{
	MDIO_voidSetPinValue(Copy_u8Port,EN,HIGH);
	Delay_ms(4);
	MDIO_voidSetPinValue(Copy_u8Port,EN,LOW);
	Delay_ms(4);	
}

void HLCD_voidSendCommand(u8 Copy_u8Command)
{
	#if   LCD_MODE == EIGHT_BITS_MODE 
	MDIO_voidSetPortValue(LCD_PORT,Copy_u8Command);
	MDIO_voidSetPinValue(DIOB,RS,LOW);
	HLCD_voidSendFallingEdge(DIOB);
	
	#else LCD_MODE == FOUR_BITS_MODE
	MDIO_voidWriteHighNibble(LCD_PORT,Copy_u8Command>>4);
	MDIO_voidSetPinValue(DIOB,RS,LOW);
	HLCD_voidSendFallingEdge(DIOB);
	MDIO_voidWriteHighNibble(LCD_PORT,Copy_u8Command);
	HLCD_voidSendFallingEdge(DIOB);
	Delay_ms(2);
	#endif
}

void HLCD_voidSendChar(u8 Copy_u8Char)
{
	#if   LCD_MODE== EIGHT_BITS_MODE
	MDIO_voidSetPortValue(LCD_PORT,Copy_u8Char); // Write char on port
	MDIO_voidSetPinValue(DIOB,RS,HIGH);      // set RS pin to write data
	HLCD_voidSendFallingEdge(DIOB);    // enable LCD
	
	#else LCD_MODE== FOUR_BITS_MODE
	MDIO_voidWriteHighNibble(LCD_PORT,Copy_u8Char>>4);
	MDIO_voidSetPinValue(LCD_PORT,RS,HIGH);      // set RS pin to write data
	HLCD_voidSendFallingEdge(DIOB);
	MDIO_voidWriteHighNibble(LCD_PORT,Copy_u8Char);
	HLCD_voidSendFallingEdge(DIOB);	
	Delay_ms(2);
	#endif
	
}

void HLCD_voidSendString(u8 *Copy_u8pString)
{
	u8 Local_u8Counter;
	for (Local_u8Counter=0;Copy_u8pString[Local_u8Counter]!='\0';Local_u8Counter++)
	{
		HLCD_voidSendChar(Copy_u8pString[Local_u8Counter]);
	}
}

void HLCD_voidClearScreen(void)
{
	HLCD_voidSendCommand(CLR_SCREEN_CMD);
	Delay_ms(20);
}

void HLCD_voidMoveCursor(u8 Copy_u8Row,u8 Copy_u8Col)
{
	u8 Local_u8ReqLocation;
	if(Copy_u8Row<1 || Copy_u8Row>2 || Copy_u8Col<1 ||Copy_u8Col>16)
	{
		Local_u8ReqLocation=0x80; // put the cursor on the first line
	}
	else if(Copy_u8Row==1)
	{
		Local_u8ReqLocation=0x80+Copy_u8Col-1;
	}
	else if (Copy_u8Row==2)
	{
		Local_u8ReqLocation=0xc0+Copy_u8Col-1;
	}
	else
	{
		// do nothing
	}
	HLCD_voidSendCommand(Local_u8ReqLocation);
	Delay_ms(2);
	
}