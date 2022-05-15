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
	DDRD = 0x0F;
	
	char temp1, temp2, temp3;
	unsigned char cyfry[10] = {0b00111111, 0b00000110, 0b01011011,0b01001111, 0b01100110, 0b01101101,0b01111101,0b00000111, 0b01111111, 0b01101111};
		
    /* Replace with your application code */
    while (1) 
    {
		for(int i = 2; i <= 142; i+=7){
			
		if(i < 100 && i > 10){
			
				for(int k = 1; k < 125; k++){
					temp1 = i%10;
					temp2 = i/10;
										
					PORTD = ~(1<<3);
					PORTA = ~cyfry[temp1];
					_delay_ms(2);
										
					PORTD = ~(1<<2);
					PORTA = ~cyfry[temp2];
					_delay_ms(2);
				}

		}
		
			else if(i >= 100){
				for(int k = 1; k <= 83; k++){
					temp1 = i%10;
					temp2 = (i/10)%10;
					temp3 = (i/100)%10;
					
					PORTD = ~(1<<3);
					PORTA = ~cyfry[temp1];
					_delay_ms(2);
										
					PORTD = ~(1<<2);
					PORTA = ~cyfry[temp2];
					_delay_ms(2);
										
					PORTD = ~(1<<1);
				    PORTA = ~cyfry[temp3];
					_delay_ms(2);
				}
			}
			else{
					PORTD = ~(1<<3);
					PORTA = ~cyfry[i];
					_delay_ms(500);
			}
			}
		}
	}




