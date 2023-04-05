/*
 * Interrupt_program.c
 *
 * Created: 3/7/2023 8:56:51 AM
 *  Author: mohamed abdelslam
 */ 
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "Interupt_interface.h"
#include "Interrupt_private.h"
void MINT_voidSetGlobalInterrupt(void)
{
	SET_BIT(SREG,7);
}

void MINT_voidClrGlobalInterrupt(void)
{
	CLR_BIT(SREG,7);
}

void MINT_voidEnableExtInterrupt(u8 Copy_u8INTNumber)
{
	switch(Copy_u8INTNumber)
	{
		case 0 : SET_BIT(GICR,6); break;
		case 1 : SET_BIT(GICR,7); break;
		case 2 : SET_BIT(GICR,5); break;
		default: break;
	}
}
void MINT_voidDisableExtInterrupt(u8 Copy_u8INTNumber)
{
		switch(Copy_u8INTNumber)
		{
			case 0 : CLR_BIT(GICR,6); break;
			case 1 : CLR_BIT(GICR,7); break;
			case 2 : CLR_BIT(GICR,5); break;
			default: break;
		}
}
void MINT_voidSetSenseControlMode(u8 Copy_u8INTNumber,u8 Copy_u8Mode)
{
	if (Copy_u8INTNumber==0)
	{
		switch(Copy_u8Mode)
		{
			case LOW_LEVEL_SENSE_MODE : 
			CLR_BIT(MCUCR,0);
			CLR_BIT(MCUCR,1);
			break;
			case ANY_LOGICAL_CHANGE_MODE :
			SET_BIT(MCUCR,0);
			CLR_BIT(MCUCR,1);
			break;			
			case FALLING_EDGE_MODE :
			CLR_BIT(MCUCR,0);
			SET_BIT(MCUCR,1);
			break;
			case RISING_EDGE_MODE :
			SET_BIT(MCUCR,0);
			SET_BIT(MCUCR,1);
			break;
			default: break;					
		}
	}
	else if (Copy_u8INTNumber==1)
	{
		switch(Copy_u8Mode)
		{
			case LOW_LEVEL_SENSE_MODE :
			CLR_BIT(MCUCR,2);
			CLR_BIT(MCUCR,3);
			break;
			case ANY_LOGICAL_CHANGE_MODE :
			SET_BIT(MCUCR,2);
			CLR_BIT(MCUCR,3);
			break;
			case FALLING_EDGE_MODE :
			CLR_BIT(MCUCR,2);
			SET_BIT(MCUCR,3);
			break;
			case RISING_EDGE_MODE :
			SET_BIT(MCUCR,2);
			SET_BIT(MCUCR,3);
			break;
			default: break;
		}		

	}
	else if (Copy_u8INTNumber==2)
	{
		switch(Copy_u8Mode)
		{
			case FALLING_EDGE_MODE : 
			CLR_BIT(MCUCSR,6);
			break;
			case RISING_EDGE_MODE :
			SET_BIT(MCUCSR,6);
			break;	
			default: break;
					
		}
	}
	else
	{
		//error
	}
}