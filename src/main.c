#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "CPU.h"
#include "MMU.h"

int main(int argc, char* argv[]) {
	printf("GameBoy emulator started.\n");
	if (argc != 2) {
		printf("Usage: %s <rom_path>\n", argv[0]);
		exit(1);
	}
	char* rom_path = argv[1]; // TODO: Implement proper arg parsing

	CPU cpu;
	CPU_init(&cpu);

	MMU mmu;
	if ( MMU_init(&mmu, rom_path) < 0 ) {
		printf("ERROR: Could not load rom <%s> into memory. Exiting...\n", rom_path);
	}
	bool running = true;
	while (running) {
		CPU_step(&cpu, &mmu);
		running = false;
	}
	return 0;
}
