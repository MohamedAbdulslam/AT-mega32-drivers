/*
 * Interrupt_private.h
 *
 * Created: 3/7/2023 8:57:32 AM
 *  Author: mohamed abdelslam
 */ 


#ifndef INTERRUPT_PRIVATE_H_
#define INTERRUPT_PRIVATE_H_

#define GICR      ( *(volatile u8 *)(0x005B) ) 
#define GIFR      ( *(volatile u8 *)(0x005A) )
#define MCUCR     ( *(volatile u8 *)(0x0055) )
#define MCUCSR    ( *(volatile u8 *)(0x0054) )
#define SREG      ( *(volatile u8 *)(0x005f) )

#endif /* INTERRUPT_PRIVATE_H_ */