/* Abner De Jesus
    9/1/2021
 */

#define LEFT_LEDS 0x1F
#define RIGHT_LEDS 0xF8

#include <avr/io.h>      // header file for input output pins
#include <util/delay.h>  // header file for delays

int main (void)
{

 DDRD |= RIGHT_LEDS;  // need bits 3-7 1111 1000 for 5 lights player 1 (right)
 DDRB |= LEFT_LEDS;  // need bigs 0-5 0001 1111 for 5 lights player 2 (left)


 while(1) {

  PORTB |= LEFT_LEDS;
  PORTD |= RIGHT_LEDS;

  _delay_ms(1000); //delay 1 second

  PORTB &= ~(LEFT_LEDS);
  PORTD &= ~(RIGHT_LEDS);

  _delay_ms(1000); //delay 1 second

 }
 }
