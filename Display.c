//Atmega16 Propeller Display

#include <avr/io.h>
#include <avr/delay.h>
#define F_CPU 8000000

#define led PORTA

unsigned int dela=5;

void delay(void)
{

_delay_ms(dela/80);

}

void display(unsigned char x);

void main()
{
DDRA=0xff; //Output Port
}

//Not yet completed
