#include <criterion/criterion.h>
#include "CPU.h" // Include your CPU header

// Test suite for the CPU component
Test(cpu_suite, initializes_registers_correctly) {
    CPU cpu;
    CPU_init(&cpu);

    // Assert that each register has its correct initial value
    cr_assert_eq(cpu.af, AF_INIT_VAL, "AF register should be 0x%04X", AF_INIT_VAL);
    cr_assert_eq(cpu.bc, BC_INIT_VAL, "BC register should be 0x%04X", BC_INIT_VAL);
    cr_assert_eq(cpu.de, DE_INIT_VAL, "DE register should be 0x%04X", DE_INIT_VAL);
    cr_assert_eq(cpu.hl, HL_INIT_VAL, "HL register should be 0x%04X", HL_INIT_VAL);
    cr_assert_eq(cpu.sp, SP_INIT_VAL, "SP register should be 0x%04X", SP_INIT_VAL);
    cr_assert_eq(cpu.pc, PC_INIT_VAL, "PC register should be 0x%04X", PC_INIT_VAL);
}

