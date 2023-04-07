/*
 * DC_MOTOR_interface.h
 *
 * Created: 4/7/2023 3:09:22 PM
 *  Author: mohamed abdelslam
 */ 


#ifndef DC_MOTOR_INTERFACE_H_
#define DC_MOTOR_INTERFACE_H_

/* Function name        : HDC_Init
   Function description : Define DC motor pin as output pin
   Function arguments   : u8 Copy_u8MotorPort,u8 Copy_u8MotorTerminal1Pin,u8 Copy_u8MotorTerminal2Pin
   Function returns     : void
*/
void HDC_Init(u8 Copy_u8MotorPort,u8 Copy_u8MotorTerminal1Pin,u8 Copy_u8MotorTerminal2Pin);

/* Function name        : HDC_RotateCW
   Function description : Rotate DC motor clockwise
   Function arguments   : u8 Copy_u8MotorPort,u8 Copy_u8MotorTerminal1Pin,u8 Copy_u8MotorTerminal2Pin
   Function returns     : void
*/
void HDC_RotateCW(u8 Copy_u8MotorPort,u8 Copy_u8MotorTerminal1Pin,u8 Copy_u8MotorTerminal2Pin);

/* Function name        : HDC_RotateCW
   Function description : Rotate DC motor counterclockwise
   Function arguments   : u8 Copy_u8MotorPort,u8 Copy_u8MotorTerminal1Pin,u8 Copy_u8MotorTerminal2Pin
   Function returns     : void
*/
void HDC_RotateCCW(u8 Copy_u8MotorPort,u8 Copy_u8MotorTerminal1Pin,u8 Copy_u8MotorTerminal2Pin);

/* Function name        : HDC_voidStopMotor
   Function description : Stop DC motor
   Function arguments   : u8 Copy_u8MotorPort,u8 Copy_u8MotorTerminal1Pin,u8 Copy_u8MotorTerminal2Pin
   Function returns     : void
*/
void HDC_voidStopMotor(u8 Copy_u8MotorPort,u8 Copy_u8MotorTerminal1Pin,u8 Copy_u8MotorTerminal2Pin);



#endif /* DC_MOTOR_INTERFACE_H_ */