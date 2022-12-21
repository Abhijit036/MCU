#include"stm32f4xx.h"
void delay(int T){
	int i;
	while(T--){
	for(i=0;i<3000;i++);}
}
void motor_init()
{
	RCC->AHB1ENR |=0x1;
	GPIOA->MODER |=0x400;
}
void sw_init()
{
	RCC->AHB1ENR |=0x4;
	GPIOC->MODER |=0x0;
}
void operation()
{
	if((GPIOC->IDR&0x2000))
	{
		delay(25);
		GPIOA->BSRR |= 0x200000;

	}
		else
	{
		delay(25);
		GPIOA->BSRR |=0x20;

	}

	}
		int main()
	{
		motor_init();
		sw_init();
		while(1)
		{
			operation();
		}
}
