/*
 * I2C_interface.h
 *
 * Created: 4/15/2023 3:03:02 PM
 *  Author: mohamed abdelslam
 */ 


#ifndef I2C_INTERFACE_H_
#define I2C_INTERFACE_H_

/* Function name        : MI2C_voidInit
   Function description : Initialize I2C ( set clock) 
   Function arguments   : u32 Copy_u32Clock
   Function returns     : void
*/
void MI2C_voidMasterInit(u32 Copy_u32Clock);

/* Function name        : MI2C_voidStart
   Function description : Enable I2C and start transmition 
   Function arguments   : void
   Function returns     : void
*/
void MI2C_voidStart(void);

/* Function name        : MI2C_voidWriteAddress
   Function description : set an address 
   Function arguments   : u8 Copy_u8Address
   Function returns     : void
*/
void MI2C_voidWriteAddress(u8 Copy_u8Address);

/* Function name        : MI2C_voidWriteData
   Function description : send data 
   Function arguments   : u8 Copy_u8Data
   Function returns     : void
*/
void MI2C_voidWriteData(u8 Copy_u8Data);

/* Function name        : MI2C_voidStop
   Function description : Stop communication 
   Function arguments   : void
   Function returns     : void
*/
void MI2C_voidStop(void);

/* Function name        : MI2C_voidSetAddress
   Function description : set an address 
   Function arguments   : u8 Copy_u8Address
   Function returns     : void
*/
void MI2C_voidSetAddress(u8 Copy_u8Address);

/* Function name        : MI2C_u8Read
   Function description : Read data 
   Function arguments   : void
   Function returns     : u8
*/
u8 MI2C_u8Read(void);

#endif /* I2C_INTERFACE_H_ */