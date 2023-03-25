#ifndef __DIFFTEST_DEF_H__
#define __DIFFTEST_DEF_H__

#include <stdint.h>

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

# define DIFFTEST_REG_SIZE (sizeof(uint64_t) * 33) // GRPs + pc

#ifndef DIFFTEST_LOG_FILE
#define DIFFTEST_LOG_FILE nullptr
#endif

#endif