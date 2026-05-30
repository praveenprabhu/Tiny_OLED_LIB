#include "ch32fun.h"
#include <stdio.h>

#include "sh1106.h"

int main(){
	SystemInit();
	I2C_init();
	
	OLED_Init();
	OLED_Clear();
	OLED_print(0, 0, "Hello");
	OLED_print(0, 1, "World");	
	OLED_print(0, 3, "0123456789");	
	OLED_print(0, 4, "Pg 3");
	OLED_print(0, 5, "Pg 4");
	OLED_print(0, 6, "Pg 5");
	OLED_print(0, 7, "Pg 6");
	
	while(1)
		;
	}
