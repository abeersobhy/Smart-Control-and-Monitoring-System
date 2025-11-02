/*
 * PC_Display.h
 *
 *  Created on: Nov 2, 2025
 *  Author: Abeer Sobhy
 */

#ifndef PC_DISPLAY_PC_DISPLAY_H_
#define PC_DISPLAY_PC_DISPLAY_H_

#include "UART.h"

void PC_Display_Init();
void PC_Display_Write(uint8_t* message);

#endif /* PC_DISPLAY_PC_DISPLAY_H_ */
