#include <stdio.h>
#include "CPU.h"

int main(void) {
	printf("GameBoy emulator started.\n");
	CPU cpu;
	CPU_init(&cpu);
	return 0;
}
