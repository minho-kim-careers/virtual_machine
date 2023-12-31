#ifndef VM_CONSTANTS_H
#define VM_CONSTANTS_H

#include <stdint.h>

// Memory size
#define INSTR_MEM_SIZE 1024
#define DATA_MEM_SIZE 1024
#define VIRT_ROUT_SIZE 256
#define HEAP_BANK_COUNT 128
#define HEAP_BANK_SIZE 64
#define REG_COUNT 32

// Memory address
#define INSTR_MEM_START 0x0000
#define INSTR_MEM_END 0x3ff
#define DATA_MEM_START 0x0400
#define DATA_MEM_END 0x7ff
#define VIRT_ROUT_START 0x0800
#define VIRT_ROUT_END 0x8ff
#define HEAP_BANK_START 0xb700
#define HEAP_BANK_END (HEAP_BANK_START + HEAP_BANK_COUNT * HEAP_BANK_SIZE)

#define MEM_SIZE HEAP_BANK_END-INSTR_MEM_START
#define HEADER_ARRAY_SIZE (HEAP_BANK_END - HEAP_BANK_START) / HEAP_BANK_SIZE

#endif /* VM_CONSTANTS_H */
