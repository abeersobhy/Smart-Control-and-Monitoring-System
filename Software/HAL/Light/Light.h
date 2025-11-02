/*
 * IR.h
 *
 *  Created on: Nov 2, 2025
 *  Author: Abeer Sobhy
 */

#ifndef LIGHT_H_
#define LIGHT_H_

#include "gpio.h"
#include "EXTI.h"

typedef enum
{
	LIGHT_PORTA,
	LIGHT_PORTB,
	LIGHT_PORTC,
}LIGHT_Port_e;

typedef enum
{
	LIGHT_PIN0,
	LIGHT_PIN1,
	LIGHT_PIN2,
	LIGHT_PIN3,
	LIGHT_PIN4,
	LIGHT_PIN5,
	LIGHT_PIN6,
	LIGHT_PIN7,
	LIGHT_PIN8,
	LIGHT_PIN9,
	LIGHT_PIN10,
	LIGHT_PIN11,
	LIGHT_PIN12,
	LIGHT_PIN13,
	LIGHT_PIN14,
	LIGHT_PIN15,
}LIGHT_Pin_e;


typedef enum
{
	LIGHT_OFF,
	LIGHT_ON,
}LIGHT_Status_e;

void Light_Init(LIGHT_Port_e LIGHT_Port, LIGHT_Pin_e LIGHT_Pin);

void Light_On(LIGHT_Port_e LIGHT_Port, LIGHT_Pin_e LIGHT_Pin);

void Light_Off(LIGHT_Port_e LIGHT_Port, LIGHT_Pin_e LIGHT_Pin);

#endif /* LIGHT_H_ */
