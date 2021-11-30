#include <avr/io.h>
#include "header.h"

//header to enable data flow control over pins

#define F_CPU 1000000    

//telling controller crystal frequency attached

#include <util/delay.h>

while (1)
       {
           int i;

                          if (i<500)

                        {

                                    OCR1A = 19999-600;//for every 500ms move servo to 180

                        }

                                    i++;

                        _delay_ms(1);

                        if (bit_is_set(PIND,0))

                        {

                                    PORTB|=(1<<PINB2);//is fire is sensed set the alarm.

                        }

                        if (bit_is_clear(PIND,1))

                        {

                                    PORTB&=~(1<<PINB2);

                        }

                        if ((i<1000)&&(i>500))

                        {

                                    OCR1A = 19999-2400; // for every 500ms move servo to 0

                        }

                        if (i==1000)

                        {

                                    i=0;

                        }

            }