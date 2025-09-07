#ifndef MEMORY_H
#define MEMORY_H


#define MEMORY_SIZE 0xFFFF

const uint16_t ROM0_START	= 0x0000;	// Non-switchable ROM Bank
const uint16_t ROM0_END		= 0x3FFF;
const uint16_t ROMX_START	= 0x4000;	// Switchable ROM Banl
const uint16_t ROMX_END		= 0x7FFF;
const uint16_t VRAM_START	= 0x8000;	// Video RAM
const uint16_t VRAM_END		= 0x9FFF;
const uint16_t SRAM_START	= 0xA000;	// External RAM in cartridge, often battery buffered
const uint16_t SRAM_END		= 0xBFFF;
const uint16_t WRAM0_START	= 0xC000;	// Work RAM
const uint16_t WRAM0_END	= 0xCFFF;
const uint16_t WRAMX_START	= 0xD000;	// Work RAM, switchable (1-7) in GBC mode
const uint16_t WRAMX_END	= 0xDFFF; 
const uint16_t ECHO_START	= 0xE000;
const uint16_t ECHO_END		= 0xFDFF;
const uint16_t OAM_START	= 0xFE00;	// (Object Attribute Table) Sprite information table
const uint16_t OAM_END		= 0xFE9F;
const uint16_t UNUSED_START	= 0xFEA0;
const uint16_t UNUSED_END	= 0xFEFF;
const uint16_t IO_REGS_START= 0xFF00;	// I/O Registers are mapped here
const uint16_t IO_REGS_END	= 0xFF7F;
const uint16_t HRAM_START	= 0xFF80;	// Internal CPU RAM
const uint16_t HRAM_END		= 0xFFFE;
const uint16_t IE_REG		= 0xFFFF;	// Interrupt enable flags


#endif // MEMORY_H
