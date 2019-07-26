//Atmega16 Propeller Display

#include <avr/io.h>
#include <avr/delay.h>
#define F_CPU 8000000

#define l PORTA

unsigned int d=5; //Delay

void delay(void)
{

  _delay_ms(d/80);

}

//Display function is written below the main function
void display(unsigned char x);

//main function
void main()
{
  DDRA=0xff; //Output Port
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
}

void display(unsigned char x)
{
  switch (x) {
    case 'E': //To  Display Letter E
    l=0x6D; delay( );
    l=0x6f; delay( );
    l=0x6f; delay( );
    l=0x6D; delay( );
    l=0x01; delay( );
    l=0xff; delay( );
    break;
  }
}



//Not yet completed
