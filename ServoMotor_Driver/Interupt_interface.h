/*
 * Interupt_interface.h
 *
 * Created: 3/7/2023 8:57:13 AM
 *  Author: mohamed abdelslam
 */ 


#ifndef INTERUPT_INTERFACE_H_
#define INTERUPT_INTERFACE_H_

/* options for sense control mode */
#define LOW_LEVEL_SENSE_MODE       0
#define ANY_LOGICAL_CHANGE_MODE    1
#define FALLING_EDGE_MODE          2
#define RISING_EDGE_MODE           3



/* Function name        : MINT_voidSetGlobalInterrupt
   Function description : Enable global interrupt bit (I BIT) 
   Function arguments   : void
   Function returns     : void
*/
void MINT_voidSetGlobalInterrupt(void);

/* Function name        : MINT_voidClrGlobalInterrupt
   Function description : Disable global interrupt bit (I BIT) 
   Function arguments   : void
   Function returns     : void
*/
void MINT_voidClrGlobalInterrupt(void);

/* Function name        : MINT_voidEnableInterrupt
   Function description : Enable interrupt for specific source interrupt 
   Function arguments   : Copy_u8INTNumber
   Function returns     : void
*/
void MINT_voidEnableExtInterrupt(u8 Copy_u8INTNumber);

/* Function name        : MINT_voidDisableInterrupt
   Function description : Disable interrupt for specific source interrupt 
   Function arguments   : Copy_u8INTNumber
   Function returns     : void
*/
void MINT_voidDisableExtInterrupt(u8 Copy_u8INTNumber);

/* Function name        : MINT_voidSetSenseControlMode
   Function description : Define sense control mode for specific interrupt source 
   Function arguments   : u8 Copy_u8INTNumber,u8 Copy_u8Mode
   Function returns     : void
*/
void MINT_voidSetSenseControlMode(u8 Copy_u8INTNumber,u8 Copy_u8Mode);

#endif /* INTERUPT_INTERFACE_H_ */