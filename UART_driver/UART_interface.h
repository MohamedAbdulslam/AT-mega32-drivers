/*
 * UART_interface.h
 *
 * Created: 4/11/2023 1:35:27 AM
 *  Author: mohamed abdelslam
 */ 


#ifndef UART_INTERFACE_H_
#define UART_INTERFACE_H_

/* UART Modes */
#define SYNCHRONOUS                       0
#define ASYNCHRONOUS_NORMAL_SPEED         1
#define ASYNCHRONOUS_DOUBLE_SPEED         2
/* stop bit options */
#define ONE_STOP_BIT                      0
#define TWO_STOP_BIT                      1
/* parity bit options */
#define NO_PARITY_BIT                     0
#define ODD_PARITY_BIT                    1
#define EVEN_PARITY_BIT                   2
/* data size options */
#define FIVE_BIT_DATA                     0
#define SIX_BIT_DATA                      1
#define SEVEN_BIT_DATA                    2
#define EIGHT_BIT_DATA                    3
#define NINE_BIT_DATA                     4


/* Function name        : MUART_voidInit
   Function description : Initialize UART peripheral 
   Function arguments   : void 
   Function returns     : void
*/
void MUART_voidInit(void);

/* Function name        : MUART_voidSendCharSynch
   Function description : send char using UART 
   Function arguments   : u8 Copy_u8Char
   Function returns     : void
*/
void MUART_voidSendCharSynch(u8 Copy_u8Char);

/* Function name        : MUART_u8RecieveCharSynch
   Function description : Receive char using UART
   Function arguments   : u8 Copy_u8Char
   Function returns     : void
*/
u8 MUART_u8RecieveCharSynch(void);

/* Function name        : MUART_voidSendString
   Function description : Send string using UART protocol
   Function arguments   : u8 *Copy_u8PtrString
   Function returns     : void
*/
void MUART_voidSendString(u8 *Copy_u8PtrString);
#endif /* UART_INTERFACE_H_ */