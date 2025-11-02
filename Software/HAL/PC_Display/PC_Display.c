/*
 * PC_Display.c
 *
 *  Created on: Nov 2, 2025
 *  Author: Abeer Sobhy
 */

#include "PC_Display.h"

void PC_Display_Init()
{
	USARTx_Config_t uart =
	{
		.USART_BaudRate = 9600,
		.USART_DataLength = USART_8BIT_DATA,
		.USART_Interrupt_Status = USART_RX_withInterrupt_Disable,
		.USART_Polling_Status = USART_Poliing_Enable,
		.USART_StopBits = USART_1_STOP_BIT,
		.USART_TX_RX_Mode = USART_RX_TX,
		.USARTx = USART1,
	};
	USARTx_Init(&uart);
}

void PC_Display_Write(uint8_t* message)
{
	USARTx_SendString(USART1, message);
}

