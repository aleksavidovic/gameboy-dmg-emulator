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
