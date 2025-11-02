/*
 *  SACS.c
 *
 *  Created on: Nov 2, 2025
 *  Author: Abeer Sobhy
 */


#include "SACS.h"

LIGHT_Status_e 	light1 = LIGHT_ON;
IR_Status_e    	IR_s;

volatile uint8_t Button_s = Button_NOT_ACTIVE;

uint8_t Light_Flag = 0;
uint8_t last_light_state = 0xFF;

void Button_ISR();

void SACS_Init()
{
	/*Initialize the emergency button to work as external interrup.*/
	EXTI_PinConfig_t EmergencyButton =
	{
		.EXTI_PIN_Mapping = EXTI0PB0,
		.EXTIx_Enable = EXTIx_ENABLE,
		.P_IRQ_CallBack = Button_ISR,
		.triggerCase = EXTIx_Trigger_FALLING,
	};

	Light_Init(LIGHT_PORTB , LIGHT_PIN5); // Initialize Light
	IR_Init(IR_PORTB, IR_PIN11); // IR Initialization for Automatic Control
	LCD_Init(); // Initialize the LCD
	PC_Display_Init(); // Display status on PC Display
	EXTI_GPIO_Init(&EmergencyButton); // Manual Control button
}
void SACS_Start()
{
	if(Light_Flag != last_light_state) // Send the status of the Light only if it changed
	{
		last_light_state = Light_Flag; // Update the status
		if(Light_Flag == 1) // Light ON
		{
			LCD_Write_Command(LCD_Clear); /*Clear the LCD*/
			PC_Display_Write("Light: ON ");
			LCD_Write_String("Light: ON ");
		}
		else if(Light_Flag == 0) // Light OFF
		{
			LCD_Write_Command(LCD_Clear); /*Clear the LCD*/
			PC_Display_Write("Light: OFF ");
			LCD_Write_String("Light: OFF ");
		}

	}

	IR_s = IR_Read_Status(IR_PORTB, IR_PIN11); // Read if there is someone entered / left the room
	if((IR_s == ACTIVE) && (Light_Flag == 0)) // Someone entered the room or click the activation button
	{
		Light_On(LIGHT_PORTB, LIGHT_PIN5); // Light on
		Light_Flag = 1; // raise a flag for the light
	}
	else if((IR_s == ACTIVE)  && (Light_Flag == 1)) // Someone left the room or deactivate the manual button
	{
		Light_Off(LIGHT_PORTB, LIGHT_PIN5); // light off
		Light_Flag = 0; // reset the flag of light
	}
	else{}
	delay_ms(150);
}
// ISR Function - For Manual Control
void Button_ISR()
{
	if(Light_Flag == 0)
	{
		Light_On(LIGHT_PORTB, LIGHT_PIN5); // Light on
		Light_Flag = 1; // raise a flag for the light
	}
	else
	{
		Light_Off(LIGHT_PORTB, LIGHT_PIN5); // light off
		Light_Flag = 0; // reset the flag of light
	}
}
