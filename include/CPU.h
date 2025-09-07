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

#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
    // Macro for little-endian systems
    #define DEFINE_REGISTER_PAIR(name16, name8_hi, name8_lo)	\
        union {													\
            uint16_t name16;									\
            struct { uint8_t name8_lo, name8_hi; };				\
        }
#else
    // Macro for big-endian systems
    #define DEFINE_REGISTER_PAIR(name16, name8_hi, name8_lo)	\
        union {													\
            uint16_t name16;									\
            struct { uint8_t name8_hi, name8_lo; };				\
        }
#endif

typedef struct {
	uint16_t	PC;					// Program counter
	uint16_t	SP;					// Stack pointer

	DEFINE_REGISTER_PAIR(af, a, f);
	DEFINE_REGISTER_PAIR(bc, b, c);
	DEFINE_REGISTER_PAIR(de, d, e);
	DEFINE_REGISTER_PAIR(hl, h, l);

	uint8_t		IR;					// Instruction register
	uint8_t		IE;					// Interrupt enable
} CPU;

void CPU_init(CPU* cpu);

#endif // _CPU_H
