/*
 * UART_Rx_reg.c
 *
 *  Created on: 24-Nov-2022
 *      Author: PHY202209EF09
 */


/*
 * UART_Rx_reg.c
 *
 *  Created on: Nov 24, 2022
 *      Author: PHY202209EF10
 */


#include "main.h"
unsigned char uart_read()
{
	while(!(USART2->SR & 0x20)){}
	{
		return USART2->DR;
	}
}

void delay(int T)
{
	while(T--)
	{
		for(int i=0;i<100000;i++);

	}
}

void Sconfig_Init()
{
	RCC->APB1ENR |= 0x20000;
	RCC->AHB1ENR |= 0x1;
	GPIOA->MODER |= 0xA0;
	GPIOA->AFR[0] |=0x7700;
	USART2->BRR  |= 0x683;  //9600 baudrate
	USART2->CR1 |= 0xc;
	USART2->CR1 |= 0x2000;
}
void led_Init()
{
	GPIOA -> MODER |=0x400;
}

void led_toggle(int count)
{
	for(count%=10;count>0;count--)
	{
		GPIOA->BSRR |=0x20;
		delay(1000);
		GPIOA->BSRR |=0x20000;
		delay(1000);
	}
}

char dat;
int main()
{

	Sconfig_Init();
	led_Init();
	while(1){
		dat=uart_read();
		led_toggle(dat);
	}
}
