/*
 * Timer_interface.h
 *
 * Created: 3/26/2023 2:15:59 PM
 *  Author: mohamed abdelslam
 */ 


#ifndef TIMER_INTERFACE_H_
#define TIMER_INTERFACE_H_

/* timer modes */
#define  OVER_FLOW_MODE                  0
#define  PHASE_CORRECT_PWM_MODE          1
#define  CTC_MODE                        2
#define  FAST_PWM_MODE                   3
/*for timer1 */
#define PWM_PHASE_CORRECT_8BIT           4
#define PWM_PHASE_CORRECT_9BIT           5
#define PWM_PHASE_CORRECT_10BIT          6
#define FAST_PWM_8BIT                    7
#define FAST_PWM_9BIT                    8
#define FAST_PWM_10BIT                   9
#define PWM_PHASE_CORRECT_ICR1           10
#define PWM_PHASE_CORRECT_OCR1A          11
#define CTC_MODE_ICR1                    12
#define FAST_PWM_ICR1                    13
#define FAST_PWM_OCR1A                   14
/* timer 0 & timer1 clock prescaler */
#define NO_CLOCK_SOURCE                  0
#define CPU_CLOCK                        1
#define CPU_DIV_BY_8                     2
#define CPU_DIV_BY_64                    3
#define CPU_DIV_BY_256                   4
#define CPU_DIV_BY_1024                  5
#define EXTERNAL_FALLING_EDGE            6
#define EXTERNAL_RISING_EDEG             7


/* timer 2 clock prescaler */
#define NO_CLOCK_SOURCE                           0
#define TIMER2_SOURCE_CLOCK                       1
#define TIMER2_SOURCE_CLOCK_DIV_BY_8              2
#define TIMER2_SOURCE_CLOCK_DIV_BY_32             3
#define TIMER2_SOURCE_CLOCK_DIV_BY_64             4
#define TIMER2_SOURCE_CLOCK_DIV_BY_128            5
#define TIMER2_SOURCE_CLOCK_DIV_BY_256            6
#define TIMER2_SOURCE_CLOCK_DIV_BY_1024           7

/* compare output mode options for timer 0 */
#define OC0_DISCONNECTED                 0
#define TOGG_OC0_ON_COMP_MATCH           1  // only for non PWM modes
#define CLR_OC0_ON_COMP_MATCH            2
#define SET_OC0_ON_COMP_MATCH            3

/* compare output mode options for timer 1 */
//to be done

/* compare output mode options for timer 2 */
#define OC2_DISCONNECTED                 0
#define TOGG_OC2_ON_COMP_MATCH           1  // only for non PWM modes
#define CLR_OC2_ON_COMP_MATCH            2
#define SET_OC2_ON_COMP_MATCH            3
/* OC0 status options */
#define OC0_ENABLED            0
#define OC0_DISABLED           1

/* OC2 status options */
#define OC2_ENABLED            0
#define OC2_DISABLED           1
/* OC1A,OC1B status options */
#define OC1A_ENABLED           0
#define OC1A_DISABLED          1
#define OC1B_ENABLED           2
#define OC1B_DISABLED          3

/* options for timer2 clock source types*/
#define  T2_CPU_CLOCK                         0
#define  T2_EXTERNAL_CRYSTAL_ON_TOSC1         1

/* ICU Noise canceller options */
#define ICU_NOISE_CANCELLER_EN       0
#define ICU_NOISE_CANCELLER_DIS      1  

/* ICU EDGE SELECT OPTIONS */
#define ICU_FALLING_EDGE    0
#define ICU_RISING_EDGE     1

/* Function name        : MTIMER0_voidInit
   Function description : configure clock and modes of timer0
   Function arguments   : void
   Function returns     : void
*/
void MTIMER0_voidInit(void);

/* Function name        : MTIMER0_voidEnableInterrupt
   Function description : enable specific interrupt for timer 0
   Function arguments   : void
   Function returns     : void
*/
void MTIMER0_voidEnableInterrupt(void);

/* Function name        : MTIMER2_voidInit
   Function description : configure clock and modes of timer2
   Function arguments   : void
   Function returns     : void
*/
void MTIMER2_voidInit(void);

/* Function name        : MTIMER2_voidEnableInterrupt
   Function description : enable specific interrupt for timer 2
   Function arguments   : void
   Function returns     : void
*/
void MTIMER2_voidEnableInterrupt(void);


/* Function name        : MTIMER1_voidInit
   Function description : configure clock and modes of timer1
   Function arguments   : void
   Function returns     : void
*/
void MTIMER1_voidInit(void);

/* Function name        : MTIMER1_voidEnableInterrupt
   Function description : enable specific interrupt for timer 1
   Function arguments   : void
   Function returns     : void
*/
void MTIMER1_voidEnableInterrupt(void);

/* Function name        : MTIMER1_voidICUInit
   Function description : configure ICU mode 
   Function arguments   : void
   Function returns     : void
*/
void MTIMER1_voidICUInit(void);


#endif /* TIMER_INTERFACE_H_ */