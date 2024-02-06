
#ifndef CONTROL_ECU_H_
#define CONTROL_ECU_H_



/*******************************************************************************
 *                                INCLUDES                                     *
 *******************************************************************************/
#include "uart.h"
#include "i2c.h"
#include "timer.h"
#include "buzzer.h"
#include "external_eeprom.h"
#include "dcMotor.h"
#include "avr/interrupt.h"
#include <util/delay.h>



/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/
#define KEYPAD_DELAY        600
#define UART_DELAY          130



/*******************************************************************************
 *                              Functions Prototypes                           *
 *******************************************************************************/

void start(void);
void receivePassword (uint8 password[]);
uint8 verifyPassword (uint8 password[] , uint8 confirmPassword[]);
void openDoor (void);
void timerHandler(void);
void falsePassword (void);
void storePasswordeeprom (uint8 password[]);
void readPasswordeeprom (uint8 password []);

#endif /* CONTROL_ECU_H_ */
