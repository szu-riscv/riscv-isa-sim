#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include "sim.h"
#include <mmu.h>

typedef uint64_t word_t;
typedef int64_t sword_t;
#define FMT_WORD "0x%016lx"

typedef word_t  rtlreg_t;
typedef word_t   vaddr_t;
typedef uint64_t paddr_t;
#define FMT_PADDR "0x%08x"
typedef uint16_t ioaddr_t;

#define CONFIG_MSIZE (16 * 1024 * 1024 * 1024UL)

std::vector<mem_cfg_t> parse_mem_layout(const char* arg);
std::vector<std::pair<reg_t, mem_t*>> make_mems(const std::vector<mem_cfg_t> &layout);

#endif
