#ifndef MEMORY_H
#define MEMORY_H

#include <stdint.h>

#define MEMORY_SIZE 0xFFFF

#define ROM0_START		 0x0000	// Non-switchable ROM Bank
#define ROM0_END		 0x3FFF
#define ROMX_START		 0x4000	// Switchable ROM Banl
#define ROMX_END		 0x7FFF
#define VRAM_START		 0x8000	// Video RAM
#define VRAM_END		 0x9FFF
#define SRAM_START		 0xA000	// External RAM in cartridge, often battery buffered
#define SRAM_END		 0xBFFF
#define WRAM0_START		 0xC000	// Work RAM
#define WRAM0_END		 0xCFFF
#define WRAMX_START		 0xD000	// Work RAM, switchable (1-7) in GBC mode
#define WRAMX_END		 0xDFFF 
#define ECHO_START		 0xE000
#define ECHO_END		 0xFDFF
#define OAM_START		 0xFE00	// (Object Attribute Table) Sprite information table
#define OAM_END			 0xFE9F
#define UNUSED_START	 0xFEA0
#define UNUSED_END		 0xFEFF
#define IO_REGS_START	 0xFF00	// I/O Registers are mapped here
#define IO_REGS_END		 0xFF7F
#define HRAM_START		 0xFF80	// Internal CPU RAM
#define HRAM_END		 0xFFFE
#define IE_REG			 0xFFFF	// Interrupt enable flags


#endif // MEMORY_H
