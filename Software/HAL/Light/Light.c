/*
 *  IR.c
 *  Created on	: Nov 2, 2025
 *  Author		: Abeer Sobhy
 */

#include "Light.h"

volatile uint8_t Light_flag = 0;

void Light_Init(LIGHT_Port_e LIGHT_Port, LIGHT_Pin_e LIGHT_Pin)
{
	GPIO_Pin_Config pinConfig =
	{
		.GPIO_PinNumber = LIGHT_Pin,
		.GPIO_PinMode = GPIO_MODE_OUTPUT_PP,
		.GPIO_PinSpeed = GPIO_SPEED_10MHZ,
	};
	if(LIGHT_Port == LIGHT_PORTA)
	{
		MCAL_GPIO_Init(GPIOA , &pinConfig);
	}
	else if(LIGHT_Port == LIGHT_PORTB)
	{
		MCAL_GPIO_Init(GPIOB , &pinConfig);
	}
	else if(LIGHT_Port == LIGHT_PORTC)
	{
		MCAL_GPIO_Init(GPIOC , &pinConfig);
	}
	else{}
}
void Light_On(LIGHT_Port_e LIGHT_Port, LIGHT_Pin_e LIGHT_Pin)
{
	if(LIGHT_Port == LIGHT_PORTA)
	{
		MCAL_GPIO_WritePin(GPIOA, LIGHT_Pin, LIGHT_ON);
	}
	else if(LIGHT_Port == LIGHT_PORTB)
	{
		MCAL_GPIO_WritePin(GPIOB, LIGHT_Pin, LIGHT_ON);
	}
	else if(LIGHT_Port == LIGHT_PORTC)
	{
		MCAL_GPIO_WritePin(GPIOC, LIGHT_Pin, LIGHT_ON);
	}
	else{}
}
void Light_Off(LIGHT_Port_e LIGHT_Port, LIGHT_Pin_e LIGHT_Pin)
{
	if(LIGHT_Port == LIGHT_PORTA)
	{
		MCAL_GPIO_WritePin(GPIOA, LIGHT_Pin, LIGHT_OFF);
	}
	else if(LIGHT_Port == LIGHT_PORTB)
	{
		MCAL_GPIO_WritePin(GPIOB, LIGHT_Pin, LIGHT_OFF);
	}
	else if(LIGHT_Port == LIGHT_PORTC)
	{
		MCAL_GPIO_WritePin(GPIOC, LIGHT_Pin, LIGHT_OFF);
	}
	else{}

}

