//#include "stm32f10x.h"


volatile int ticks=1;


//interrupt handler
/*void SysTick_Handler(void)
{
	ticks++;
}
void delay_ms(int ms)
{
ticks=0;
while(ticks<ms);
}
*/
int main()
{
	// configure gpio C13 pushpull output
	/*RCC->APB2ENR |= 1<<4;
	GPIOC->CRH |= (1<<21);
	GPIOC->CRH &= ~((1<<22)|(1<<23));

	SystemCoreClockUpdate();
	// configure systick to generate interrupt every 1ms
	SysTick_Config(SystemCoreClock/1000);*/

while(1)
{
	/*GPIOC->BSRR = 1<<13;
	delay_ms(1000);
	GPIOC->BSRR = 1<<(13+16);
	delay_ms(1000);*/
}
return 0;
}
