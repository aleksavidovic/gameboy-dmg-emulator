#include "MMU.h"
#include "memory.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int MMU_init(MMU* mmu, char* rom_path){
	memset(mmu, 0, sizeof(MMU));
    FILE* rom_file = fopen(rom_path, "rb");
    if (!rom_file) {
        fprintf(stderr, "Error: Could not open ROM file %s\n", rom_path);
        return -1;
    }
    long rom_size;
    fseek(rom_file, 0, SEEK_END);
    if ( (rom_size = ftell(rom_file)) < 0 ) {
        fprintf(stderr, "Error while reading file %s\n", rom_path);
        return -1;
	}
    fseek(rom_file, 0, SEEK_SET);

    if ((unsigned long)rom_size > sizeof(mmu->ROM)) {
        fprintf(stderr, "Error: ROM file is too large!\n");
    } else {
        fread(mmu->ROM, 1, rom_size, rom_file);
        printf("Loaded %ld bytes from %s\n", rom_size, rom_path);
    }

    fclose(rom_file);

	printf("Loaded ROM: %s\n", rom_path);
	return 0;
}

void MMU_write(MMU* mmu, uint16_t address, uint8_t data) {
	if (address <= ROMX_END)
		mmu->ROM[address] = data; // some sort of mapping will need to be done
}

uint8_t MMU_read(MMU* mmu, uint16_t address) {
	if (address <= ROMX_END) { 
		return mmu->ROM[address];
	}
	return 0;
}
