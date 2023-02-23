/*
 * DIO_interface.h
 *
 * Created: 2/2/2023 9:43:38 AM
 *  Author: mohamed abdelslam
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

/* DIO pins */
#define PIN0      0
#define PIN1      1
#define PIN2      2
#define PIN3      3
#define PIN4      4
#define PIN5      5
#define PIN6      6
#define PIN7      7

/* DIO directions */
#define INPUT     0
#define OUTPUT    1

#define LOW       0
#define HIGH      1

/* DIO port options */
#define DIOA      0
#define DIOB      1
#define DIOC      2
#define DIOD      3
/* Function name        : MDIO_voidSetPinDirection
   Function description : Set a direction of a specific pin 
   Function arguments   : u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Direction
   Function returns     : void
*/
void MDIO_voidSetPinDirection(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Direction);

/* Function name        : MDIO_voidSetPortDirection
   Function description : Set a direction of a specific port 
   Function arguments   : u8 Copy_u8Port,u8 Copy_u8Direction
   Function returns     : void
*/
void MDIO_voidSetPortDirection(u8 Copy_u8Port,u8 Copy_u8Direction);

/* Function name        : MDIO_voidSetPinValue
   Function description : write a value on a specific pin 
   Function arguments   : u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Value
   Function returns     : void
*/
void MDIO_voidSetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Value);

/* Function name        : MDIO_u8GetPinValue
   Function description : Get value of a specific pin 
   Function arguments   : u8 Copy_u8Port,u8 Copy_u8Pin
   Function returns     : u8
*/
u8 MDIO_u8GetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin);

/* Function name        : MDIO_voidSetPortValue
   Function description : write a value on a specific port 
   Function arguments   : u8 Copy_u8Port,u8 Copy_u8Value
   Function returns     : void
*/
void MDIO_voidSetPortValue(u8 Copy_u8Port,u8 Copy_u8Value);


/* Function name        : MDIO_voidTogglePin
   Function description : toggle a specific pin 
   Function arguments   : u8 Copy_u8Port,u8 Copy_u8Pin
   Function returns     : void
*/
void MDIO_voidTogglePin(u8 Copy_u8Port,u8 Copy_u8Pin);

/* Function name        : MDIO_voidTogglePort
   Function description : toggle a specific port 
   Function arguments   : u8 Copy_u8Port
   Function returns     : void
*/
void MDIO_voidTogglePort(u8 Copy_u8Port);
#endif /* DIO_INTERFACE_H_ */