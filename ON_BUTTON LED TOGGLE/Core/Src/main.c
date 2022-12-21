#include "stm32f4xx.h"
void delay(int T){
	int i;
	while(T--){
	for(i=0;i<5000;i++);}
}
int main()
{

	RCC->AHB1ENR |=0x5;
	GPIOA->MODER |=0x400;
	GPIOC->MODER |=0x0;
	while(1)
	{
		if(GPIOA->IDR & 2000)
		{
		GPIOA->BSRR |=0x200000;
		delay(50);
		}
		else
			{
			GPIOA->BSRR |=0x20;
			delay(50);
			}
	}
}
