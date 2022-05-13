#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"

void conButton();
int main(){
    /**
     * @brief main Function to initialize led and speed
     * 
     */
	GPIO_InitTypeDef GPIOD_Params; /
    /**
     * @param unit32_i is a loop variable
     * 
     */
	uint32_t i; 

	__HAL_RCC_GPIOD_CLK_ENABLE(); 
	configure_Button();
	GPIO_PinState button;
	button = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0);
	/**
	 * @brief Configure LEDs from pin 12-14, pushpull mode and low speed mode
	 * 
	 */
	GPIOD_Params.Pin = GPIO_PIN_12 | GPIO_PIN_13 | GPIO_PIN_14;
	GPIOD_Params.Mode = GPIO_MODE_OUTPUT_PP; 
	GPIOD_Params.Speed = GPIO_SPEED_LOW; 
	HAL_GPIO_Init(GPIOD, &GPIOD_Params); 
	//last_button_state = GPIOA->IDR & 0x00000001;

	while(1){
       // if(button)
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12 , GPIO_PIN_SET); // Turn on LEDs
		for(i = 0; i < 160000000; i++){};
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12 , GPIO_PIN_RESET); // Turn off LEDs
		for(i = 0; i < 160000000; i++){};

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13 , GPIO_PIN_SET);
		for(i = 0; i < 160000000; i++){}
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_RESET);
		for(i = 0; i < 160000000; i++){}

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14 , GPIO_PIN_SET);
		for(i = 0; i < 160000000; i++){}
	    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_RESET);
		for(i = 0; i < 160000000; i++){}

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12 , GPIO_PIN_SET);
		for(i = 0; i < 100000000; i++){}
	    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_RESET);
		for(i = 0; i < 100000000; i++){}

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13 , GPIO_PIN_SET);
		for(i = 0; i < 100000000; i++){}
	     HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_RESET);
 		for(i = 0; i < 100000000; i++){}

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14 , GPIO_PIN_SET);
		for(i = 0; i < 100000000; i++){}
		 HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_RESET);
		for(i = 0; i < 100000000; i++){}

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12 , GPIO_PIN_SET);
		for(i = 0; i < 80000000; i++){}
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_RESET);
		for(i = 0; i < 80000000; i++){}

		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13 , GPIO_PIN_SET);
		for(i = 0; i < 80000000; i++){}
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_RESET);
		for(i = 0; i < 80000000; i++){}
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14 , GPIO_PIN_SET);
		for(i = 0; i < 80000000; i++){}
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_RESET);
		for(i = 0; i < 80000000; i++){}
	}
}
/**
 * @brief Function to initialize pushbutton
 * 
 */
void conButton(void)
{ /**
 * @brief Construct a new hal rcc gpioa clk enable clock
 * 
 */
	__HAL_RCC_GPIOA_CLK_ENABLE(); 
    /**
     * @brief Pushbutton and mode input
     * 
     */
	GPIO_InitTypeDef Push;  
	Push.Mode = GPIO_MODE_INPUT; 
	Push.Pin = GPIO_PIN_0;  
	Push.Pull = GPIO_NOPULL; 
	HAL_GPIO_Init(GPIOA, &Push); 

}
