/**
 ******************************************************************************
 * @file           : main.c
 * @Abeer          : Abeer Sobhy
 * @Dtae		   : 2 Nov. 2025
 * @brief          : Main program body - only for calling
 ******************************************************************************
 */

#include "SACS.h"

int main(void)
{
	SACS_Init();
	for(;;)
	{
		SACS_Start();
	}
}
