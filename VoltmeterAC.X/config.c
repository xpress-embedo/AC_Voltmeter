/* 
 * File:   config.c
 * Author: xpress_embedo
 *
 * Created on November 10, 2016, 10:32 PM
 */
#include "config.h"

static uint32_t millisecond = 0;

uint32_t millis( void )
{
  uint32_t time = 0;
  GIE = 0;
  time = millisecond;
  GIE = 1;
  return time;
}

//Timer0
//Prescaler 1:16; TMR0 Preload = 6; Actual Interrupt Time : 1 ms
void InitTimer0()
{
  T0CON	 = 0xC3;
  TMR0L	 = 0x06;
  GIE = 1;
  TMR0IE = 1;
}

void interrupt ISR_ROUTINE( )
{
  if( TMR0IF )
  {
    TMR0IF = 0;
    TMR0L	 = 0x06;
    millisecond++;
  }
}
