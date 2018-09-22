/*
 * lab2_1.2.c
 *
 * Created: 2018/9/12 16:41:56
 * Author : Lenovo
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>


int main(void)
{
	DDRD |= (1 << PORTD6);
	TCCR0A |= (1 << WGM01);
	OCR0A = 70;
	TIMSK0 |= (1 << OCIE0A);
	TCCR0B |= (1 << CS02);
	sei();
	while (1)
	{
	}
}

ISR(TIMER0_COMPA_vect)
{
	PORTD ^= (1 << PORTD6);
}

