/*
 * SPI_interface.h
 *
 * Created: 4/13/2023 3:04:06 PM
 *  Author: mohamed abdelslam
 */ 


#ifndef SPI_INTERFACE_H_
#define SPI_INTERFACE_H_


/* SPI data order options */
#define LSB_FIRST                   0
#define MSB_FIRST                   1
/* SPI modes options */
#define SPI_MASTER                  0
#define SPI_SLAVE                   1
/* SPI clock prescaler options */
#define CLK_FREQ_DIV_BY_2           0
#define CLK_FREQ_DIV_BY_4           1
#define CLK_FREQ_DIV_BY_8           2
#define CLK_FREQ_DIV_BY_16          3
#define CLK_FREQ_DIV_BY_32          4
#define CLK_FREQ_DIV_BY_64          5
#define CLK_FREQ_DIV_BY_128         6
/* SPI clock polarity options */
#define LEADING_IS_RISING           0   // IDLE state is logic low
#define LEADING_IS_FALLING          1   // IDLE state is logic high
/* SPI clock phase options    */
#define SAMPLE_AT_LEADING           0  // send data on leading edge and receive on trailing edge
#define SETUP_AT_LEADING            1  // receive data on leading edge and send on trailing edge



/* Function name        : MSPI_voidInit
   Function description : Initialize SPI peripheral (mode_ data order _ clock)
   Function arguments   : void
   Function returns     : void
*/
void MSPI_voidInit(void);

/* Function name        : MSPI_voidSendChar
   Function description : Send byte using SPI 
   Function arguments   : u8 Copy_u8Data
   Function returns     : void
*/
void MSPI_u8SendChar(u8 Copy_u8Data);


/* Function name        : MSPI_voidRecieveChar
   Function description : Receive byte using SPI 
   Function arguments   : void
   Function returns     : u8
*/
u8 MSPI_u8RecieveChar(void);

/* Function name        : MSPI_voidSendString
   Function description : Send string using SPI 
   Function arguments   : u8 Copy_u8Ptrstring
   Function returns     : void
*/
void MSPI_voidSendString(u8 *Copy_u8Ptrstring);

#endif /* SPI_INTERFACE_H_ */