#include <stdio.h>
#include "CPU.h"
#include "memory.h"

int main(void) {
	printf("GameBoy emulator started.\n");
	CPU cpu;
	CPU_init(&cpu);
	uint8_t memory[MEMORY_SIZE] = {0};
	return 0;
}
