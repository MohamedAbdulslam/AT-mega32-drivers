/*
 * EEPROM_private.h
 *
 * Created: 3/1/2023 10:01:03 AM
 *  Author: mohamed abdelslam
 */ 


#ifndef EEPROM_PRIVATE_H_
#define EEPROM_PRIVATE_H_


#define EEARH     (*(volatile u8 *)(0x3F))
#define EEARL     (*(volatile u8 *)(0x3E))
#define EEDR      (*(volatile u8 *)(0x3D))
#define EECR      (*(volatile u8 *)(0x3C))


#endif /* EEPROM_PRIVATE_H_ */