/*
 * SPI_private.h
 *
 * Created: 4/13/2023 3:04:19 PM
 *  Author: mohamed abdelslam
 */ 


#ifndef SPI_PRIVATE_H_
#define SPI_PRIVATE_H_

#define SPCR           *((volatile u8*)0x2D)
#define SPSR           *((volatile u8*)0x2E)
#define SPDR           *((volatile u8*)0x2F)


#endif /* SPI_PRIVATE_H_ */