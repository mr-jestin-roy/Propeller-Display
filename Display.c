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
    display('H'); //display T
    display('S'); //display H
    display('E'); //display A
    display('J'); //display M
    display('I'); //display E
    display('R'); //display E
    display('B'); //display M

    _delay_ms(80); //Delay 

}

//Not yet completed
