/*	Author: tlafo001
 *  Partner(s) Name: Tyler Lafond
 *	Lab Section: 024
 *	Assignment: Lab #2  Exercise #3
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
	DDRC = 0xFF; PORTC = 0x00;
    /* Insert your solution below */
	unsigned char tempA;
	unsigned char cntavail;
    while (1) {
	tempA = PINA;
	cntavail = 0x04;
	if (tempA & 0x01)
	{
		cntavail--;
	}
	if (tempA & 0x02)
	{
		cntavail--;
	}
	if (tempA & 0x04)
	{
		cntavail--;
	} 
	if (tempA & 0x08)
	{
		cntavail--;
	}
	
	if (cntavail == 0x00)
	{
		PORTC = cntavail && 0x8F;
	}
	else
	{
		PORTC = cntavail && 0x0F;
	}

    }
    return 1;
}
