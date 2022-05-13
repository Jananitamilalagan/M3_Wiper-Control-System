

#include "driver.h"
#include <stdio.h>


int main(void)
{

	init_all_led();				// LED Initialisation
	init_button();				// Butoon Initialiasation

	while (1)
	{
		volatile int press = button_count();
		if (press == 1)                        //Activate buttons count according to function
		{
			led_on(LED_RED);
			press= 0;
		}
		else if (press == 2)                        //Activate buttons count according to function
		{
			    led_on(LED_BLUE);
				user_delay_ms(1000);      //  this function is for 1hz frequency
				led_off(LED_BLUE);
				user_delay_ms(1000);
				led_on(LED_GREEN);
				user_delay_ms(1000);
				led_off(LED_GREEN);
				user_delay_ms(1000);
				led_on(LED_ORANGE);
				user_delay_ms(1000);
				led_off(LED_ORANGE);
				user_delay_ms(1000);
			    press = 0;
		}
		else if (press == 3)
		{
			    led_on(LED_BLUE);
				user_delay_ms(250);			//  this function is for 4hz frequency
				led_off(LED_BLUE);
				user_delay_ms(250);
				led_on(LED_GREEN);
				user_delay_ms(250);
				led_off(LED_GREEN);
				user_delay_ms(250);
				led_on(LED_ORANGE);
				user_delay_ms(250);
				led_off(LED_ORANGE);
				user_delay_ms(250);
			    press= 0;
		}
		else if (press == 4)
		{
			    led_on(LED_BLUE);
				user_delay_ms(125);			//  this function is for 8hz frequency
				led_off(LED_BLUE);
				user_delay_ms(125);
				led_on(LED_GREEN);
				user_delay_ms(125);
				led_off(LED_GREEN);
				user_delay_ms(125);
				led_on(LED_ORANGE);
				user_delay_ms(125);
				led_off(LED_ORANGE);
				user_delay_ms(125);
			    press = 0;
		}
		else if (press == 5)
		{

			led_off(LED_RED);
			press = 0;
		}
	}
}
