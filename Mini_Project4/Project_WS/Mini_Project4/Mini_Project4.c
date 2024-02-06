/*
 ============================================================================
 Name        : Mini_Project4.c
 Author      : Fady Magdy
 Description : System control fan speed based on the room temperature

 ============================================================================
 */

#include "ultrasonic.h"
#include "lcd.h"
#include "avr/io.h" /* To use the SREG Register */

int main(void)
{
	uint16 distance = 0;

	/* Enable Global Interrupt I-Bit */
	SREG |= (1<<7);

	/* Initialize the LCD driver */
	LCD_init();

	/* Initialize the Ultrasonic driver */
	Ultrasonic_init();

	/* Read the distance from the Ultrasonic sensor */
	distance = Ultrasonic_readDistance();

	/* Display the distance on LCD screen */
	LCD_displayString("Distance= ");
	LCD_intgerToString(distance);
	LCD_displayString("cm");

	while(1)
	{

	}
}
