/*
 * ADC_private.h
 *
 * Created: 3/23/2023 10:37:29 AM
 *  Author: mohamed abdelslam
 */ 


#ifndef ADC_PRIVATE_H_
#define ADC_PRIVATE_H_

#define ADCSR     *((volatile u8 *)0x28)
#define ADMUX     *((volatile u8 *)0x27)
#define ADCSRA    *((volatile u8 *)0x26)
#define ADCH      *((volatile u8 *)0x25)
#define ADCL      *((volatile u8 *)0x24)
//( *(volatile u8 *)(0x003B) )
#endif /* ADC_PRIVATE_H_ */