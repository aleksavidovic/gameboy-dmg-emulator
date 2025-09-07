#ifndef MMU_H
#define MMU_H

#include "memory.h"
#include <stdint.h>


typedef struct {
	uint8_t ROM[0x8000];	
	// TODO: Implement other regions
	// consider using one big union?
} MMU;

int MMU_init(MMU* mmu, char* rom_path);
void MMU_write(MMU* mmu, uint16_t address, uint8_t data);
uint8_t MMU_read(MMU* mmu, uint16_t address); 

#endif // MMU_H
