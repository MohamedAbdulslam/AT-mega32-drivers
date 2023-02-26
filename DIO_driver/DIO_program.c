/*
 * DIO_program.c
 *
 * Created: 2/2/2023 9:43:19 AM
 *  Author: mohamed abdelslam
 */ 

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "DIO_private.h"

void MDIO_voidSetPinDirection(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Direction)
{
    switch(Copy_u8Port)
	{
		case DIOA : 
		if (Copy_u8Direction==INPUT)
		{
			CLR_BIT(DDRA,Copy_u8Pin);
		} 
		else if (Copy_u8Direction==OUTPUT)
		{
			SET_BIT(DDRA,Copy_u8Pin);
		}
		else 
		{
			/* error */
		}
		break;
		
		case DIOB :
		if (Copy_u8Direction==INPUT)
		{
			CLR_BIT(DDRB,Copy_u8Pin);
		}
		else if (Copy_u8Direction==OUTPUT)
		{
			SET_BIT(DDRB,Copy_u8Pin);
		}
		else
		{
			/* error */
		}
		break;
		
		case DIOC :
		if (Copy_u8Direction==INPUT)
		{
			CLR_BIT(DDRC,Copy_u8Pin);
		}
		else if (Copy_u8Direction==OUTPUT)
		{
			SET_BIT(DDRC,Copy_u8Pin);
		}
		else
		{
			/* error */
		}
		break;
			
		case DIOD :
		if (Copy_u8Direction==INPUT)
		{
			CLR_BIT(DDRD,Copy_u8Pin);
		}
		else if (Copy_u8Direction==OUTPUT)
		{
			SET_BIT(DDRD,Copy_u8Pin);
		}
		else
		{
			/* error */
		}
		break;
		
		default:
		break; 
							
	}
}
void MDIO_voidSetPortDirection(u8 Copy_u8Port,u8 Copy_u8Direction)
{

  switch(Copy_u8Port)
  {
	  case DIOA :
	  if (Copy_u8Direction==INPUT)
	  {
		  DDRA=0x00;
	  }
	  else if (Copy_u8Direction==OUTPUT)
	  {
		  DDRA=0xFF;
	  }
	  else
	  {
	    /* error */
	  }
	  break;
	  case DIOB :
	  if (Copy_u8Direction==INPUT)
	  {
		  DDRB=0x00;
	  }
	  else if (Copy_u8Direction==OUTPUT)
	  {
		  DDRB=0xFF;
	  }
	  else
	  {
		  /* error */
	  }
	  break;	
	  case DIOC :
	  if (Copy_u8Direction==INPUT)
	  {
		  DDRC=0x00;
	  }
	  else if (Copy_u8Direction==OUTPUT)
	  {
		  DDRC=0xFF;
	  }
	  else
	  {
		  /* error */
	  }
	  break;
	  case DIOD :
	  if (Copy_u8Direction==INPUT)
	  {
		  DDRD=0x00;
	  }
	  else if (Copy_u8Direction==OUTPUT)
	  {
		  DDRD=0xFF;
	  }
	  else
	  {
		  /* error */
	  }
	  break;
	  default: 
	  break;	  	    
  }	

}

void MDIO_voidSetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Value)
{
    switch(Copy_u8Port)
    {
	    case DIOA :
	    if (Copy_u8Value==LOW)
	    {
		    CLR_BIT(PORTA,Copy_u8Pin);
	    }
	    else if (Copy_u8Value==HIGH)
	    {
		    SET_BIT(PORTA,Copy_u8Pin);
	    }
	    else
	    {
		    /* error */
	    }
	    break;
	    
	    case DIOB :
	    if (Copy_u8Value==LOW)
	    {
		    CLR_BIT(PORTB,Copy_u8Pin);
	    }
	    else if (Copy_u8Value==HIGH)
	    {
		    SET_BIT(PORTB,Copy_u8Pin);
	    }
	    else
	    {
		    /* error */
	    }
	    break;
	    case DIOC :
	    if (Copy_u8Value==LOW)
	    {
		    CLR_BIT(PORTC,Copy_u8Pin);
	    }
	    else if (Copy_u8Value==HIGH)
	    {
		    SET_BIT(PORTC,Copy_u8Pin);
	    }
	    else
	    {
		    /* error */
	    }
	    break;
	    case DIOD :
	    if (Copy_u8Value==LOW)
	    {
		    CLR_BIT(PORTD,Copy_u8Pin);
	    }
	    else if (Copy_u8Value==HIGH)
	    {
		    SET_BIT(PORTD,Copy_u8Pin);
	    }
	    else
	    {
		    /* error */
	    }
	    break;				
	    
	    default:
	    break;
	    
    }
}
u8 MDIO_u8GetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin)
{
	 u8 Local_u8value=0;
	 switch(Copy_u8Port)
	 {
		 case DIOA :
		 Local_u8value=GET_BIT(PINA,Copy_u8Pin);
		 break;
		 case DIOB :
		 Local_u8value=GET_BIT(PINB,Copy_u8Pin);
		 break;
		 case DIOC :
		 Local_u8value=GET_BIT(PINC,Copy_u8Pin);
		 break;
		 case DIOD :
		 Local_u8value=GET_BIT(PIND,Copy_u8Pin);
		 break;		 		 
		 default: break;
		 
	 }
	 return Local_u8value;
}
void MDIO_voidSetPortValue(u8 Copy_u8Port,u8 Copy_u8Value)
{
	switch(Copy_u8Port)
	{
		case DIOA :
		PORTA=Copy_u8Value;
		break;
		case DIOB :
		PORTB=Copy_u8Value;
		break;	
		case DIOC :
		PORTC=Copy_u8Value;
		break;
		case DIOD :
		PORTD=Copy_u8Value;
		break;					
		default: break;
							
	}
}

void MDIO_voidTogglePin(u8 Copy_u8Port,u8 Copy_u8Pin)
{
	switch(Copy_u8Port)
	{
		
		case DIOA :
		TOG_BIT(PORTA,Copy_u8Pin);
		break;
		case DIOB :
		TOG_BIT(PORTB,Copy_u8Pin);
		break;
		case DIOC :
		TOG_BIT(PORTC,Copy_u8Pin);
		break;
		case DIOD :
		TOG_BIT(PORTD,Copy_u8Pin);
		break;
		default: break;
		
	}
}

void MDIO_voidTogglePort(u8 Copy_u8Port)
{
	    switch(Copy_u8Port)
		{
		case DIOA :
		PORTA=~PORTA;
		break;
		case DIOB :
		PORTB=~PORTB;
		break;
		case DIOC :
		PORTC=~PORTC;
		break;
		case DIOD :
		PORTD=~PORTD;
		break;
		default: break;
		}			
}

void MDIO_voidEnablePullUp(u8 Copy_u8Port,u8 Copy_u8Pin)
{
	switch(Copy_u8Port)
	{
		case DIOA : 
		SET_BIT(PORTA,Copy_u8Pin);
		break;
		case DIOB :
		SET_BIT(PORTB,Copy_u8Pin);
		break;
		case DIOC :
		SET_BIT(PORTC,Copy_u8Pin);
		break;
		case DIOD :
		SET_BIT(PORTD,Copy_u8Pin);
		break;
		default: break;						
	}
}

void MDIO_voidDisablePullUp(u8 Copy_u8Port,u8 Copy_u8Pin)
{
		switch(Copy_u8Port)
		{
			case DIOA :
			CLR_BIT(PORTA,Copy_u8Pin);
			break;
			case DIOB :
			CLR_BIT(PORTB,Copy_u8Pin);
			break;
			case DIOC :
			CLR_BIT(PORTC,Copy_u8Pin);
			break;
			case DIOD :
			CLR_BIT(PORTD,Copy_u8Pin);
			break;
			default: break;
		}
}

void MDIO_voidWriteLowNibble(u8 Copy_u8Port,u8 Copy_u8Value)
{
	Copy_u8Value&=0x0f;
	switch(Copy_u8Port)
	{
		case DIOA :
		PORTA&=0xf0;
		PORTA|=Copy_u8Value;
		break;
		case DIOB :
		PORTB&=0xf0;
		PORTB|=Copy_u8Value;
		break;
		case DIOC :
		PORTC&=0xf0;
		PORTC|=Copy_u8Value;
		break;
		case DIOD :
		PORTD&=0xf0;
		PORTD|=Copy_u8Value;
		break;						
	}
	
}

void MDIO_voidWriteHighNibble(u8 Copy_u8Port,u8 Copy_u8Value)
{
	Copy_u8Value<<=4;
	switch(Copy_u8Port)
	{
		case DIOA :
		PORTA&=0x0f;
		PORTA|=Copy_u8Value;
		break;
		case DIOB :
		PORTB&=0x0f;
		PORTB|=Copy_u8Value;
		break;
		case DIOC :
		PORTC&=0x0f;
		PORTC|=Copy_u8Value;
		break;
		case DIOD :
		PORTD&=0x0f;
		PORTD|=Copy_u8Value;
		break;
	}
	
}