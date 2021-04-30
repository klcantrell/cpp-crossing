#include "stm32f4_gpio_driver.h"

int main()
{
	RCC->AHB1ENR |= GPIOA_EN | GPIOB_EN;
	GPIOA->MODER |= MODER_5_OUT;
	GPIOB->MODER |= MODER_5_OUT;
	
	while (1)
	{
		for (int x = 0; x < 900000; x++)
		{
			GPIOA->ODR |= LED_PIN;
			GPIOB->ODR |= LED_PIN;
		}
		for (int x = 0; x < 900000; x++)
		{
			GPIOA->ODR &= ~LED_PIN;
			GPIOB->ODR &= ~LED_PIN;
		}
	}
}
