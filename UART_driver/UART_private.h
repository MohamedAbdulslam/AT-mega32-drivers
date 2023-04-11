/*
 * UART_private.h
 *
 * Created: 4/11/2023 1:36:02 AM
 *  Author: mohamed abdelslam
 */ 


#ifndef UART_PRIVATE_H_
#define UART_PRIVATE_H_


	
#define  UBRRL     ( *(volatile u8 *)(0x29) )
#define  UBRRH     ( *(volatile u8 *)(0x40) )
#define  UCSRB     ( *(volatile u8 *)(0x2A) )
#define  UCSRA     ( *(volatile u8 *)(0x2B) )
#define  UDR       ( *(volatile u8 *)(0x2C) )
#define  UCSRC     ( *(volatile u8 *)(0x40) )


#endif /* UART_PRIVATE_H_ */