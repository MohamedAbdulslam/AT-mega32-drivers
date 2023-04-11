/*
 * UART_program.c
 *
 * Created: 4/11/2023 1:35:02 AM
 *  Author: mohamed abdelslam
 */ 

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#define F_CPU 8000000UL
#include "DELAY.h"
#include "UART_interface.h"
#include "UART_private.h"
#include "UART_config.h"

void MUART_voidInit(void)
{
	    /* Configure Baud Rate of UART */
	    #if     UART_MODE==ASYNCHRONOUS_NORMAL_SPEED
	    u16 Local_u16UBRR=( F_CPU/(16*UART_BAUD_RATE) ) -1;
	    UBRRH= (u8) (Local_u16UBRR>>8);
	    UBRRL= (u8) (Local_u16UBRR);
	    #elif   UART_MODE==ASYNCHRONOUS_DOUBLE_SPEED
	    u16 Local_u16UBRR=( F_CPU/(8*UART_BAUD_RATE) ) -1;
	    UBRRH= (u8) (Local_u16UBRR>>8);
	    UBRRL= (u8) (Local_u16UBRR);
	    #endif
    UCSRC=1<<7; // to usr UCSRC register
    /* Configure UART Mode */
    #if   UART_MODE==SYNCHRONOUS
    SET_BIT(UCSRC,6);
    #elif UART_MODE==ASYNCHRONOUS_NORMAL_SPEED
    CLR_BIT(UCSRC,6);
    CLR_BIT(UCSRA,1);
    #elif UART_MODE==ASYNCHRONOUS_DOUBLE_SPEED
    CLR_BIT(UCSRC,6);
    SET_BIT(UCSRA,1);
    #endif
    

    /* Enable UART transmitter and reciever */
    UCSRB=(1<<3)|(1<<4);
    
    /* Configure Data Size && stop and parity bits */
    #if     UART_DATA_SIZE == FIVE_BIT_DATA
    CLR_BIT(UCSRC,1);
    CLR_BIT(UCSRC,2);
    CLR_BIT(UCSRB,2);
    #elif   UART_DATA_SIZE == SIX_BIT_DATA
    SET_BIT(UCSRC,1);
    CLR_BIT(UCSRC,2);
    CLR_BIT(UCSRB,2);
    #elif   UART_DATA_SIZE == SEVEN_BIT_DATA
    CLR_BIT(UCSRC,1);
    SET_BIT(UCSRC,2);
    CLR_BIT(UCSRB,2);
    #elif   UART_DATA_SIZE == EIGHT_BIT_DATA
    SET_BIT(UCSRC,1);
    SET_BIT(UCSRC,2);
    CLR_BIT(UCSRB,2);
    #elif   UART_DATA_SIZE == NINE_BIT_DATA
    SET_BIT(UCSRC,1);
    SET_BIT(UCSRC,2);
    SET_BIT(UCSRB,2);
    #endif
    
    #if    UART_STOP_BIT == ONE_STOP_BIT
    CLR_BIT(UCSRC,3);
    #elif  UART_STOP_BIT == TWO_STOP_BIT
    SET_BIT(UCSRC,3);
    #endif
    
    #if    UART_PARITY_BIT == NO_PARITY_BIT
    CLR_BIT(UCSRC,4);
    CLR_BIT(UCSRC,5);
    #elif  UART_PARITY_BIT == ODD_PARITY_BIT
    SET_BIT(UCSRC,4);
    SET_BIT(UCSRC,5);
    #elif  UART_PARITY_BIT == EVEN_PARITY_BIT
    CLR_BIT(UCSRC,4);
    SET_BIT(UCSRC,5);
    #endif
}

void MUART_voidSendCharSynch(u8 Copy_u8Char)
{
	/* wait while UDR buffer is not empty */
	while(GET_BIT(UCSRA,5)==0);
	/* store data in UDR */
	UDR=Copy_u8Char;
}

u8 MUART_u8RecieveCharSynch(void)
{
	
	while(GET_BIT(UCSRA,7)==0); // wait while the receive buffer is empty
	return UDR;
}

void MUART_voidSendString(u8 *Copy_u8PtrString)
{
	while(*Copy_u8PtrString!='\0')
	{
		MUART_voidSendCharSynch(*Copy_u8PtrString);
		Copy_u8PtrString++;
		Delay_ms(200);
	}
}