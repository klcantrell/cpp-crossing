#include "uart.h"

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

// interface with C standard I/O library
// All I/O gets directed to console
struct __FILE { int handle; };
FILE __stdin = {0}; // where'd the double underscores go for FILE?
FILE __stdout = {1};
FILE __stderr = {2};

int fgetc(FILE *f) {
    int c;

    c = USART2_read(); // read from console

    if (c == '\r') {
        USART2_write(c);
        c = '\n'; // we want to echo an \n right after any \r
    }

    USART2_write(c);

    return c;
}

int fputc(int c, FILE *f) {
    return USART2_write(c);
}

int n;
char str[80];

void test_setup(void) {
    printf("please enter a number: ");
    scanf("%d", &n);
    printf("the number entered is: %d\r\n", n);
    printf("please type a character string: ");
    gets(str);
    printf("the character string entered is: ");
    puts(str);
    printf("\r\n");
}
