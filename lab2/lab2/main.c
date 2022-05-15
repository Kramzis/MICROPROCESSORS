/*
 * lab2.c
 *
 * Created: 2022-04-26 08:36:35
 * Author : Student
 */ 

#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>


int main(void)
{
	DDRA = 0xFF;
	DDRD = 0xFF;
	
	unsigned char cyfry[10] = {0b00111111, 0b00000110, 0b01011011,0b01001111, 0b01100110, 0b00101101,0b01111011,0b00000111, 0b01111111, 0b01101111};
		
    /* Replace with your application code */
    while (1) 
    {
		PORTD = ~_BV(0);
		PORTA = ~cyfry[2];
		_delay_ms(2);
		
		PORTD = ~_BV(1);
		PORTA = ~cyfry[0];
		_delay_ms(2);
		
		PORTD = ~_BV(2);
		PORTA = ~cyfry[0];
		_delay_ms(2);
		
		PORTD = ~_BV(3);
		PORTA = ~cyfry[1];
		_delay_ms(2);
		
    }
}


