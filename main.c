#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <irq.h>
#include <uart.h>
#include <console.h>
#include <generated/csr.h>

#define delay(n) for(volatile int i = n; i; i--){ }

int main(void)
{
#ifdef CONFIG_CPU_HAS_INTERRUPT
	irq_setmask(0);
	irq_setie(1);
#endif
	uart_init();

	puts("Hello world!\n");
        
        int i = 0, d = 1;
	while(1) {
            i += d;
            if (i == 9 || i == 0) d = -d;
            leds_out_write(1 << i);
            delay(1000000);
	}

	return 0;
}

