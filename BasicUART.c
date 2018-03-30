#define F_CPU 1000000UL
#define BAUDRATE 4800
#include <util/delay.h>
#include "BasicUART.h"

char myString[30];// used to store incoming string

int main(void){
	USART_init();
	while(1)
	{
		_delay_ms(250);// Wait for 1 (s)
		USART_getstring(myString);
		USART_putstring(myString);
	}
	return 0;	
}
