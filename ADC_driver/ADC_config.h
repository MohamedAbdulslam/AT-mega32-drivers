/*
 * ADC_config.h
 *
 * Created: 3/23/2023 10:36:47 AM
 *  Author: mohamed abdelslam
 */ 


#ifndef ADC_CONFIG_H_
#define ADC_CONFIG_H_

/* Select voltage reference between options
   AREF_WITHOUT_INTERNAL
   AVCC_WITH_EXT_CAP
   INTERNAL_VOLTAGE_REF
*/
#define ADC_REF_VOLTAGE   AVCC_WITH_EXT_CAP

/*Select ADC clock between options: 
  CLOCK_DIV_BY_2
  CLOCK_DIV_BY_4
  CLOCK_DIV_BY_8
  CLOCK_DIV_BY_16
  CLOCK_DIV_BY_32
  CLOCK_DIV_BY_64
  CLOCK_DIV_BY_128
*/
#define ADC_CLOCK      CLOCK_DIV_BY_64

#endif /* ADC_CONFIG_H_ */