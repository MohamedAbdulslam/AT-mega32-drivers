/*
 * I2C_private.h
 *
 * Created: 4/15/2023 3:03:15 PM
 *  Author: mohamed abdelslam
 */ 


#ifndef I2C_PRIVATE_H_
#define I2C_PRIVATE_H_

#define TWBR       *((volatile u8 *)0x20)
#define TWSR       *((volatile u8 *)0x21)
#define TWAR       *((volatile u8 *)0x22)
#define TWDR       *((volatile u8 *)0x23)
#define TWCR       *((volatile u8 *)0x56)



#endif /* I2C_PRIVATE_H_ */