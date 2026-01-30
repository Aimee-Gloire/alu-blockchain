#ifndef ENDIANNESS_H
#define ENDIANNESS_H

#include <stdint.h>

uint32_t swap_uint32(uint32_t n);
int is_little_endian(void);

#endif /* ENDIANNESS_H */
