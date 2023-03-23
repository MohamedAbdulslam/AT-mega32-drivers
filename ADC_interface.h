/*
 * ADC_interface.h
 *
 * Created: 3/23/2023 10:36:25 AM
 *  Author: mohamed abdelslam
 */ 


#ifndef ADC_INTERFACE_H_
#define ADC_INTERFACE_H_

/* options for reference voltage for ADC  */
#define AREF_WITHOUT_INTERNAL      0
#define AVCC_WITH_EXT_CAP          1
#define INTERNAL_VOLTAGE_REF       2

/* options for ADC clock */
#define CLOCK_DIV_BY_2         0
#define CLOCK_DIV_BY_4         1
#define CLOCK_DIV_BY_8         2
#define CLOCK_DIV_BY_16        3
#define CLOCK_DIV_BY_32        4
#define CLOCK_DIV_BY_64        5
#define CLOCK_DIV_BY_128       6

/* Function name        : MADC_voidInit
   Function description : Initialize ADC 
   Function arguments   : void
   Function returns     : void
*/
void MADC_voidInit(void);

/* Function name        : MADC_u16Read
   Function description : Read value from ADC  
   Function arguments   : void
   Function returns     : u16
*/
u16 MADC_u16Read(void);

#endif /* ADC_INTERFACE_H_ */