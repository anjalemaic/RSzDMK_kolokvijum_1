/**
* @file main.c
* @brief Serijski port
* @author Anja Lemaic
* @date 16-05-2021
* @version 1.0
*/
#include <avr/io.h>
#include <stdio.h>
#include <stdlib.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <stdint.h>
#include <avr/pgmspace.h>
#include "../pin_driver1/pin_driver1.h"
#include "../usart_1/usart_1.h"
#include "timer0.h"
#include "util.h"


int main()
{

	usartInit(9600);
	char ispis[64];
	int8_t array1;
	int8_t duzina;
	DDRB |= 1 << 5; //PB5 je izlaz

	while (1)
	{
		usartPutString_P(PSTR("Unesite duzinu niza:\r\n"));
		while(!usartAvailable());
		_delay_ms(100);
		duzina = usartGetString(array1);

		PORTB |= 1 << 5; //LED ON
		_delay_ms(1000); //pauza 1s

		Sort(array1, duzina, UP);

		//sprinft(ispis, "Sortiran niz:\r\n", array1);
		//usartPutString(ispis);
	}

	return 0;
}
