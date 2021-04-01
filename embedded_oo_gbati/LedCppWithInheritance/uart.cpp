#include "Uart.h"

void USART2_Init(void) {
    // enable clock access to uart2 (located on APB1, use RCC_APB1ENR bit 17)
    RCC->APB1ENR |= 0x20000; // (1<<17)
    // enable clock access to portA (located on AHB1, use RCC_AHB1ENR bit 0)
    RCC->AHB1ENR |= 0x01; // (1<<0)
    // enable pins for alternate functions pa2 and pa3
    GPIOA->MODER &= ~0x00F0;
    GPIOA->MODER |= 0x00A0;
    // configure type of alternate function for pa2 and pa3
    GPIOA->AFR[0] &= ~0xFF00;
    GPIOA->AFR[0] |= 0x7700;
    // configure uart
    USART2->BRR = 0x0683;
    USART2->CR1 = 0x000C;
    USART2->CR2 = 0x000;
    USART2->CR3 = 0x000;
    USART2->CR1 |= 0x2000;
}

int USART2_write(int ch) {
    while (!(USART2->SR & 0x0080)) {
        // wait until transfer buffer is not empty
    }
    USART2->DR = (ch & 0xFF);
    return ch;
}

int USART2_read(void) {
    while (!(USART2->SR & 0x0020)) {
        // wait for new character to arrive
    }
    return USART2->DR;
}
