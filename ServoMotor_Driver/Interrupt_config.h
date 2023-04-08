/*
 * Interrupt_config.h
 *
 * Created: 3/7/2023 8:57:47 AM
 *  Author: mohamed abdelslam
 */ 


#ifndef INTERRUPT_CONFIG_H_
#define INTERRUPT_CONFIG_H_


/* External interrupt options
   0 
   1 
   2  */

/* Sense control mode options for int0 and int1 */
//#define LOW_LEVEL_SENSE_MODE       00 /* ISC11,ISC10 for int1 && ISC01,ISC00 for int0  */
//#define ANY_LOGICAL_CHANGE_MODE    01 /* ISC11,ISC10 for int1 && ISC01,ISC00 for int0  */
//#define FALLING_EDGE_MODE          10 /* ISC11,ISC10 for int1 && ISC01,ISC00 for int0  */
//#define RISING_EDGE_MODE           11 /* ISC11,ISC10 for int1 && ISC01,ISC00 for int0  */
/* Sense control mode options for int2 */
//#define FALLING_EDGE_MODE          0  /* ISC2  */
//#define RISING_EDGE_MODE           1  /* ISC2  */

#endif /* INTERRUPT_CONFIG_H_ */