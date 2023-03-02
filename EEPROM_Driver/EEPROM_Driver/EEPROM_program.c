/*
 * EEPROM_program.c
 *
 * Created: 3/1/2023 10:00:21 AM
 *  Author: mohamed abdelslam
 */ 
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "EEPROM_interface.h"
#include "EEPROM_private.h"
#include "EEPROM_config.h"


void MEEPROM_voidWrite(u16 Copy_u16Address,u8 Copy_u8data)
{
	/* wait the completion of previous write operation */
	while(GET_BIT(EECR,1)==1);
	/* write address on EEARL , EEARH */
	EEARL=(u8)Copy_u16Address;
	EEARH=(u8)(Copy_u16Address>>8);
	/* write data on EEDR */
	EEDR=Copy_u8data;
	/* start writing  */
	SET_BIT(EECR,2);  // set EEMRE BIT
	SET_BIT(EECR,1);  // set EEWE BIT 	
}

u8 MEEPROM_voidRead(u16 Copy_u16Address)
{
	/* wait the completion of previous write operation */
	while(GET_BIT(EECR,1)==1);
	/* write address on EEARL , EEARH */
	EEARL=(u8)Copy_u16Address;
	EEARH=(u8)(Copy_u16Address>>8);
	/* start EEPROM read operation */
	SET_BIT(EECR,0); // Set EERE BIT
	return EEDR;	
}