/*
 * DIO_private.h
 *
 * Created: 2/2/2023 9:43:55 AM
 *  Author: mohamed abdelslam
 */ 


#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_


#define PORTA    ( *(volatile u8 *)(0x003B) )
#define DDRA     ( *(volatile u8 *)(0x003A) )
#define PINA     ( *(volatile u8 *)(0x0039) )
#define PORTB    ( *(volatile u8 *)(0x0038) )
#define DDRB     ( *(volatile u8 *)(0x0037) )
#define PINB     ( *(volatile u8 *)(0x0036) )
#define PORTC    ( *(volatile u8 *)(0x0035) )
#define DDRC     ( *(volatile u8 *)(0x0034) )
#define PINC     ( *(volatile u8 *)(0x0033) )
#define PORTD    ( *(volatile u8 *)(0x0032) )
#define DDRD     ( *(volatile u8 *)(0x0031) )
#define PIND     ( *(volatile u8 *)(0x0030) )
#endif /* DIO_PRIVATE_H_ */