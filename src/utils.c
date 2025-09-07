#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int load_ROM_to_memory(uint8_t memory[], size_t memory_size, char* rom_path) {
    FILE* rom_file = fopen(rom_path, "rb");
    if (!rom_file) {
        fprintf(stderr, "Error: Could not open ROM file %s\n", rom_path);
        return -1;
    }
    
    fseek(rom_file, 0, SEEK_END);
    long rom_size = ftell(rom_file);
    fseek(rom_file, 0, SEEK_SET);

    if (rom_size > (memory_size)) {
        fprintf(stderr, "Error: ROM file is too large!\n");
    } else {
        fread(memory, 1, rom_size, rom_file);
        printf("Loaded %ld bytes from %s\n", rom_size, rom_path);
    }

    fclose(rom_file);

	printf("Loaded ROM: %s\n", rom_path);
	return 0;
}
