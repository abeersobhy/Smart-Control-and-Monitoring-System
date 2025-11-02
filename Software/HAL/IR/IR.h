/*
 * IR.h
 *
 *  Created on: Nov 2, 2025
 *      Author: Abeer Sobhy
 */

#ifndef IR_IR_H_
#define IR_IR_H_

#include "gpio.h"

typedef enum
{
	IR_PORTA,
	IR_PORTB,
	IR_PORTC,
}IR_Port_e;

typedef enum
{
	IR_PIN0,
	IR_PIN1,
	IR_PIN2,
	IR_PIN3,
	IR_PIN4,
	IR_PIN5,
	IR_PIN6,
	IR_PIN7,
	IR_PIN8,
	IR_PIN9,
	IR_PIN10,
	IR_PIN11,
	IR_PIN12,
	IR_PIN13,
	IR_PIN14,
	IR_PIN15,
}IR_Pin_e;


typedef enum
{
	NOT_ACTIVE,
	ACTIVE,
}IR_Status_e;

void IR_Init(IR_Port_e IR_Port, IR_Pin_e IR_Pin);

IR_Status_e IR_Read_Status(IR_Port_e IR_Port, IR_Pin_e IR_Pin);


#endif /* IR_IR_H_ */
