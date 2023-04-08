/*
 * ServoMotor_interface.h
 *
 * Created: 4/8/2023 2:09:52 AM
 *  Author: mohamed abdelslam
 */ 


#ifndef SERVOMOTOR_INTERFACE_H_
#define SERVOMOTOR_INTERFACE_H_
/* the pins will generate pwm signal */
#define OC1B  4
#define OC1A  5
/* The minimum and maximum angle which the servo motor will rotate */
#define MINIMUM_ANGLE          -90
#define MAXIMUM_ANGLE           90


/* Function name        : HSERVO_voidInit
   Function description : Initialize servo motor
   Function arguments   : void
   Function returns     : void
*/
void HSERVO_voidInit(void);

/* Function name        : HSERVO_voidRotate
   Function description : Rotate servo motor with specific degree
   Function arguments   : f32 Copy_f32Angle
   Function returns     : void
*/
void HSERVO_voidRotate(f32 Copy_f32Angle);



#endif /* SERVOMOTOR_INTERFACE_H_ */