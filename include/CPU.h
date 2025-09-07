#ifndef _CPU_H
#define _CPU_H

#include <stdint.h>

// Initial values of registers
#define AF_INIT_VAL 0x01B0
#define BC_INIT_VAL 0x0013
#define DE_INIT_VAL 0x00D8
#define HL_INIT_VAL 0x014D
#define SP_INIT_VAL 0xFFFE
#define PC_INIT_VAL 0x0100

typedef struct {
	uint16_t	PC; // Program counter
	uint16_t	SP; // Stack pointer
	uint16_t	AF;	// Accumulator & Flags
	uint16_t	BC;
	uint16_t	DE;
	uint16_t	HL;
	uint8_t		IR; // Instruction register
	uint8_t		IE; // Interrupt enable
} CPU;

void CPU_init(CPU* cpu);

#endif // _CPU_H
