/*
 * EEPROM_interface.h
 *
 * Created: 3/1/2023 10:00:41 AM
 *  Author: mohamed abdelslam
 */ 


#ifndef EEPROM_INTERFACE_H_
#define EEPROM_INTERFACE_H_

/* Function name        : MEEPROM_voidWrite
   Function description : write specific data on specefic EEPROM location address 
   Function arguments   : u16 address,u8 data
   Function returns     : void
*/
void MEEPROM_voidWrite(u16 Copy_u16Address,u8 Copy_u8data);

/* Function name        : MEEPROM_voidRead
   Function description : Read data from specific location
   Function arguments   : u16 address
   Function returns     : u8
*/
u8 MEEPROM_voidRead(u16 Copy_u16Address);


#endif /* EEPROM_INTERFACE_H_ */