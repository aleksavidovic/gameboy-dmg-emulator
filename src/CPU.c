#include "CPU.h"
#include <stdio.h>

void CPU_init(CPU* cpu) {
	cpu->PC = PC_INIT_VAL;
	cpu->SP = SP_INIT_VAL;
	cpu->af = AF_INIT_VAL;
	cpu->bc = BC_INIT_VAL;
	cpu->de = DE_INIT_VAL;
	cpu->hl = HL_INIT_VAL;

	printf("CPU init successful.\n");
}

void CPU_step(CPU* cpu, MMU* mmu) {
	uint8_t instruction_byte = MMU_read(mmu, cpu->PC);
	printf("CPU read instruction byte: %02x\n", instruction_byte);
	// Decode instruction
	// Perform the operation
	cpu->PC++; // will need to increase by instruction size
}
