/*
 * Sevensegment_interface.h
 *
 * Created: 2/25/2023 2:34:24 PM
 *  Author: mohamed abdelslam
 */ 


#ifndef SEVENSEGMENT_INTERFACE_H_
#define SEVENSEGMENT_INTERFACE_H_


/* Seven segments options -- COMMON CATHODE OR COMMON ANODE */
#define SEVEN_SEGMENT_CC      0
#define SEVEN_SEGMENT_CA      1





/* Function name        : HSEVSEG_voidInit
   Function description : Initialize a port that is related to SEVENSEGMENT 
   Function arguments   : u8 Copy_u8Port
   Function returns     : void
*/
void HSEVSEG_voidInit(u8 Copy_u8Port);


/* Function name        : HSEVSEG_voidWrite
   Function description : write value on seven segment
   Function arguments   : u8 Copy_u8Port,u8 Copy_u8Value
   Function returns     : void
*/
void HSEVSEG_voidWrite(u8 Copy_u8Port,u8 Copy_u8Value);

/* Function name        : HBCD_TO_SEVSEG_voidInit
   Function description : Initialize port connected to BCD  
   Function arguments   : u8 Copy_u8Port
   Function returns     : void
*/
void HBCD_TO_SEVSEG_voidInit(u8 Copy_u8Port);


/* Function name        : HBCD_TO_SEVSEG_voidWrite
   Function description : write value on seven segment using BCD 
   Function arguments   : u8 Copy_u8Port,u8 Copy_u8Value
   Function returns     : void
*/
void HBCD_TO_SEVSEG_voidWrite(u8 Copy_u8Port,u8 Copy_u8Value);

#endif /* SEVENSEGMENT_INTERFACE_H_ */