/*
 * KEYPAD_interface.h
 *
 * Created: 3/10/2023 10:45:00 AM
 *  Author: mohamed abdelslam
 */ 


#ifndef KEYPAD_INTERFACE_H_
#define KEYPAD_INTERFACE_H_

/* Function name        : HKEYPAD_voidInit
   Function description : Initialize a keypad 
   Function arguments   : void
   Function returns     : void
*/
void HKEYPAD_voidInit(void);

/* Function name        : HKEYPAD_u8Read
   Function description : read the value from keypad
   Function arguments   : void
   Function returns     : u8
*/
u8 HKEYPAD_u8Read(void);


#endif /* KEYPAD_INTERFACE_H_ */