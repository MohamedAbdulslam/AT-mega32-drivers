/*
 * LED_interface.h
 *
 * Created: 2/19/2023 1:11:10 PM
 *  Author: mohamed abdelslam
 */ 


#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_
/* Function name        : HLED_voidInit
   Function Arguments   : u8 Copy_u8Port,u8 Copy_pin
   Function returns     : void
   Function description : initialize led  
 */
void HLED_voidInit(u8 Copy_u8Port,u8 Copy_u8pin);

/* Function name        : HLED_voidLED_ON
   Function Arguments   : u8 Copy_u8Port,u8 Copy_pin
   Function returns     : void
   Function description : Set a led on   
 */
void HLED_voidLED_ON(u8 Copy_u8Port,u8 Copy_u8pin);


/* Function name        : HLED_voidLED_OFF
   Function Arguments   : u8 Copy_u8Port,u8 Copy_pin
   Function returns     : void
   Function description : Set a led off   
 */
void HLED_voidLED_OFF(u8 Copy_u8Port,u8 Copy_u8pin);

/* Function name        : HLED_u8GetLEDstatus
   Function Arguments   : u8 Copy_u8Port,u8 Copy_pin
   Function returns     : u8
   Function description : Get the status of a specific LED   
 */
u8 HLED_u8GetLEDstatus(u8 Copy_u8Port,u8 Copy_u8pin);

/* Function name        : HLED_voidToggleLED
   Function Arguments   : u8 Copy_u8Port,u8 Copy_pin
   Function returns     : void
   Function description : Toggle a specific LED   
 */
void HLED_voidToggleLED(u8 Copy_u8Port,u8 Copy_u8pin);
#endif /* LED_INTERFACE_H_ */