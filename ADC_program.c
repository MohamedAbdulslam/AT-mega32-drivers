/*
 * ADC_program.c
 *
 * Created: 3/23/2023 10:36:08 AM
 *  Author: mohamed abdelslam
 */ 


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "ADC_interface.h"
#include "ADC_private.h"
#include "ADC_config.h"

void MADC_voidInit(void)
{
	/* select ADC Channel */
    CLR_BIT(ADMUX,0);  //ADC0 CHANNEL
		
	/* configure reference voltage */
	#if  ADC_REF_VOLTAGE == AREF_WITHOUT_INTERNAL
	  CLR_BIT(ADMUX,6);
	  CLR_BIT(ADMUX,7);
	#elif ADC_REF_VOLTAGE == AVCC_WITH_EXT_CAP
	  SET_BIT(ADMUX,6);
	  CLR_BIT(ADMUX,7);	
	#elif ADC_REF_VOLTAGE == INTERNAL_VOLTAGE_REF
	  SET_BIT(ADMUX,6);
	  SET_BIT(ADMUX,7);	    
	
	#endif
	
	/* Enable ADC */
	SET_BIT(ADCSRA,7);  //set ADEN bit
	
	/* Configure clock */
	#if    ADC_CLOCK== CLOCK_DIV_BY_2
	CLR_BIT(ADCSRA,0);
	CLR_BIT(ADCSRA,1);
	CLR_BIT(ADCSRA,2);
	#elif  ADC_CLOCK== CLOCK_DIV_BY_4
	CLR_BIT(ADCSRA,0);
	SET_BIT(ADCSRA,1);
	CLR_BIT(ADCSRA,2);	
	#elif  ADC_CLOCK== CLOCK_DIV_BY_8
	SET_BIT(ADCSRA,0);
	SET_BIT(ADCSRA,1);
	CLR_BIT(ADCSRA,2);	
	#elif  ADC_CLOCK== CLOCK_DIV_BY_16
	CLR_BIT(ADCSRA,0);
	CLR_BIT(ADCSRA,1);
	SET_BIT(ADCSRA,2);	
	#elif  ADC_CLOCK== CLOCK_DIV_BY_32
	SET_BIT(ADCSRA,0);
	CLR_BIT(ADCSRA,1);
	SET_BIT(ADCSRA,2);	
	#elif  ADC_CLOCK== CLOCK_DIV_BY_64
	CLR_BIT(ADCSRA,0);
	SET_BIT(ADCSRA,1);
	SET_BIT(ADCSRA,2);	
	#elif  ADC_CLOCK== CLOCK_DIV_BY_128
	SET_BIT(ADCSRA,0);
	SET_BIT(ADCSRA,1);
	SET_BIT(ADCSRA,2);	
	#endif
}

u16 MADC_u16Read(void)
{
	u16 Local_u16ReadVal=0;
	/* start conversion  */
	SET_BIT(ADCSRA,6);
	/* wait while conversion completes */
	while(GET_BIT(ADCSRA,4)==0); 
	/* Clear ADIF flag */
	SET_BIT(ADCSRA,4);
	/* Store ADC value */
	Local_u16ReadVal=ADCL;
	Local_u16ReadVal|=(ADCH<<8);
	
	return Local_u16ReadVal;
}