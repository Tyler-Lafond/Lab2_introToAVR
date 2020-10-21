/*	Author: tlafo001
 *  Partner(s) Name: Tyler
 *	Lab Section: 024
 *	Assignment: Lab #2  Exercise #1
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF; 
	DDRB = 0xFF; PORTB = 0x00;
    /* Insert your solution below */
	unsigned char tempA;
	unsigned char tempB;
    while (1) {
	tempA = PINA;
	if (tempA == 0x01)
	{
		tempB = 0x01;
	}
	else
	{
		tempB = 0x00;
	}
	PORTB = tempB;
    }
    return 1;
}
