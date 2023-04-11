/*
 * UART_config.h
 *
 * Created: 4/11/2023 1:35:45 AM
 *  Author: mohamed abdelslam
 */ 


#ifndef UART_CONFIG_H_
#define UART_CONFIG_H_
/* specify a baud rate for UART */
#define UART_BAUD_RATE                9600UL
/* specify UART Mode -- SYNCHRONOUS or ASYNCHRONOUS_NORMAL_SPEED or ASYNCHRONOUS_DOUBLE_SPEED  */
#define UART_MODE                     ASYNCHRONOUS_NORMAL_SPEED
/* specify UART stop bit number -- ONE_STOP_BIT or TWO_STOP_BIT */
#define UART_STOP_BIT                 ONE_STOP_BIT
/* specify parity bit mode     -- NO_PARITY_BIT or ODD_PARITY_BIT or EVEN_PARITY_BIT */   
#define UART_PARITY_BIT               NO_PARITY_BIT
/* specify data size           -- FIVE_BIT_DATA or SIX_BIT_DATA or SEVEN_BIT_DATA or EIGHT_BIT_DATA or NINE_BIT_DATA     */
#define UART_DATA_SIZE                EIGHT_BIT_DATA
#endif /* UART_CONFIG_H_ */