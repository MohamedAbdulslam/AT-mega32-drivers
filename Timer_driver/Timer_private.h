/*
 * Timer_private.h
 *
 * Created: 3/26/2023 2:16:31 PM
 *  Author: mohamed abdelslam
 */ 


#ifndef TIMER_PRIVATE_H_
#define TIMER_PRIVATE_H_

                      
#define TIMSK        *((volatile u8 *)0x59) //general for interrupt enable bits
#define TIFR         *((volatile u8 *)0x58) //general for interrupt flag bits
/*related to timer 0 */
#define TCCR0        *((volatile u8 *)0x53) 
#define TCNT0        *((volatile u8 *)0x52) 
#define OCR0         *((volatile u8 *)0x5C) 
/*related to timer 1 */
#define TCCR1A       *((volatile u8 *)0x4F) 
#define TCCR1B       *((volatile u8 *)0x4E) 
#define TCNT1H       *((volatile u8 *)0x4D) 
#define TCNT1L       *((volatile u8 *)0x4C) 
#define OCR1AH       *((volatile u8 *)0x4B) 
#define OCR1AL       *((volatile u8 *)0x4A) 
#define OCR1BH       *((volatile u8 *)0x49) 
#define OCR1BL       *((volatile u8 *)0x48) 
#define ICR1H        *((volatile u8 *)0x47) 
#define ICR1L        *((volatile u8 *)0x46)
#define OCR1A        *((volatile u16 *)0x4A) 
#define OCR1B        *((volatile u16 *)0x48) 
#define TCNT1        *((volatile u16 *)0x4C)
#define ICR1         *((volatile u16 *)0x46)
/*related to timer 2 */
#define TCCR2        *((volatile u8 *)0x45) 
#define TCNT2        *((volatile u8 *)0x44) 
#define OCR2         *((volatile u8 *)0x43) 
#define ASSR         *((volatile u8 *)0x42) 

#endif /* TIMER_PRIVATE_H_ */