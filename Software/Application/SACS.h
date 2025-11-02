/*
 * SACS.h
 *
 *  Created on: Nov 2, 2025
 *  Author: Abeer Sobhy
 */

#ifndef SACS_H_
#define SACS_H_

#include "IR.h"
#include "Light.h"
#include "LCD.h"
#include "PC_Display.h"

typedef enum
{
	Button_ACTIVE,
	Button_NOT_ACTIVE,
}Button_Status_e;

void SACS_Init();
void SACS_Start();

#endif /* SACS_H_ */
