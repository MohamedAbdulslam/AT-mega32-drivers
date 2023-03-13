/*
 * LCD_interface.h
 *
 * Created: 3/8/2023 12:00:26 PM
 *  Author: mohamed abdelslam
 */ 


#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_
/* LCD MODES */
#define FOUR_BITS_MODE   0
#define EIGHT_BITS_MODE  1

/* LCD MODES */

#define EN        0
#define RS        1
#define RW        2

/* LCD Commands */
#define FOUR_BITS_CMD                  0X28
#define EIGHT_BITS_CMD                 0X38
#define CLR_SCREEN_CMD                 0X01
#define RETURN_HOME_CMD                0X02
#define SHIFT_CURSOR_TO_LEFT           0X04
#define SHIFT_DISPLAY_RIGHT            0X05
#define ENTRY_MODE_CMD                 0X06
#define SHIFT_DISPLAY_LEFT             0X07
#define DISPLAY_OFF_CURSOR_OFF         0X08
#define DISPLAY_OFF_CURSOR_ON          0X0A
#define DISPLAY_ON_CURSOR_OFF          0X0C
#define DISPLAY_ON_CURSOR_ON           0X0E
#define DISPLAY_ON_CURSOR_BLINKING     0X0F
#define SHIFT_CURSOR_POSITION_TO_LEFT  0X10
#define SHIFT_CURSOR_POSITION_TO_RIGHT 0X14
#define SHIFT_ENTIRE_DISPLAY_TO_LEFT   0X18
#define SHIFT_ENTIRE_DISPLAY_TO_RIGHT  0X1C
#define CURSOR_AT_FIRST_LINE           0X80
#define CURSOR_AT_SECOND_LINE          0XC0 
/* LCD Commands */

/* Function name        : HLCD_voidInit
   Function description : Initialize lcd 
   Function arguments   : u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Direction
   Function returns     : void
*/
void HLCD_voidInit(void);

/* Function name        : HLCD_voidSendFallingEdge
   Function description : Send falling edge on specific pin 
   Function arguments   : u8 Copy_u8Port,u8 Copy_u8Pin
   Function returns     : void
*/
static void HLCD_voidSendFallingEdge(u8 Copy_u8Port);

/* Function name        : HLCD_voidSendCommand
   Function description : Send specific command to LCD 
   Function arguments   : u8 Copy_u8Command
   Function returns     : void
*/
void HLCD_voidSendCommand(u8 Copy_u8Command);

/* Function name        : HLCD_voidSendChar
   Function description : Write specific character on LCD 
   Function arguments   : u8 Copy_u8Char
   Function returns     : void
*/
void HLCD_voidSendChar(u8 Copy_u8Char);

/* Function name        : HLCD_voidSendString
   Function description : write string on LCD
   Function arguments   : u8 *Copy_u8pString
   Function returns     : void
*/
void HLCD_voidSendString(u8 *Copy_u8pString);

/* Function name        : HLCD_voidClearScreen
   Function description : Clear the display of the lcd
   Function arguments   : void
   Function returns     : void
*/
void HLCD_voidClearScreen(void);

void HLCD_voidMoveCursor(u8 Copy_u8Row,u8 Copy_u8Col);
#endif /* LCD_INTERFACE_H_ */