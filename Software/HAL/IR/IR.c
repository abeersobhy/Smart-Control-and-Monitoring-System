/*
 *  IR.c
 *  Created on	: Nov 2, 2025
 *  Author		: Abeer Sobhy
 */

#include "IR.h"

void IR_Init(IR_Port_e IR_Port, IR_Pin_e IR_Pin)
{
	GPIO_Pin_Config pinConfig =
	{
		.GPIO_PinNumber = IR_Pin,
		.GPIO_PinMode = GPIO_MODE_INPUT_FLOATING,
	};
	if(IR_Port == IR_PORTA)
	{
		MCAL_GPIO_Init(GPIOA , &pinConfig);
	}
	else if(IR_Port == IR_PORTB)
	{
		MCAL_GPIO_Init(GPIOB , &pinConfig);
	}
	else if(IR_Port == IR_PORTC)
	{
		MCAL_GPIO_Init(GPIOC , &pinConfig);
	}
	else{}
}
IR_Status_e IR_Read_Status(IR_Port_e IR_Port, IR_Pin_e IR_Pin)
{
	if(IR_Port == IR_PORTA)
	{
		return MCAL_GPIO_ReadPin(GPIOA , IR_Pin) ? NOT_ACTIVE : ACTIVE;
	}
	else if(IR_Port == IR_PORTB)
	{
		return MCAL_GPIO_ReadPin(GPIOB , IR_Pin) ? NOT_ACTIVE : ACTIVE;
	}
	else if(IR_Port == IR_PORTC)
	{
		return MCAL_GPIO_ReadPin(GPIOC , IR_Pin) ? NOT_ACTIVE : ACTIVE;
	}
	else{}
}
