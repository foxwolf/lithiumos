#ifndef STDLIB_H
#define STDLIB_H

#include <types.h>

char *itoa(int value, char *str, int base);
bool malloc_init(void);
void *malloc(size_t bytes);
void free(void *mem);

#endif