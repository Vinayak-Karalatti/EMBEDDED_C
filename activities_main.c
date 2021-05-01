  
/**
 * @file activities_main.c
 * @author Vinayak K ( vinukaralatti@gmail.com)
 * @brief Heat Seating Application to set Temperature of seat
 * @version 0.1
 * @date 2021-04-27 
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Activity_1.h"
#include "Activity_2.h"
#include "Activity_3.h"
#include "Activity_4.h"

int main(void)
{
    uint16_t tmp;
    
    while(1)
    {
        if(LED()==1) //Check if both the switches are pressed
        {
            LED_ON();          //Turn LED ON
            tmp=GetADC();     //To Get the ADC value
            PWM(tmp);         //this is to PWM output based on temperature
		        USARTWrite(tmp); //this is for Serial monitor to display Temperature
        }
        else  // other cases
        {
            LED_OFF();     //Turn LED OFF
	    _delay_ms(200);
        }
    }
    return 0;
}
