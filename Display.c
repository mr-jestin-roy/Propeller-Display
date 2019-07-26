//Atmega16 Propeller Display

#include <avr/io.h>
#include <avr/delay.h>
#define F_CPU 8000000

#define led PORTA

unsigned int d=5; //Delay

void delay(void)
{

  _delay_ms(d/80);

}

void display(unsigned char x);

void main()
{
  DDRA=0xff; //Output Port
}

while(1)
{
    display('T'); //display T
    display('H'); //display H
    display('A'); //display A
    display('M'); //display M
    display('E'); //display E
    display('E'); //display E
    display('M'); //display M

    _delay_ms(80); //Delay

}

//Not yet completed
