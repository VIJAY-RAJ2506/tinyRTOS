#include <stddef.h>

void *memcpy(void *dest, void *src, size_t size)
{
	for (int i = 0; i < size; i++)
		dest[i] = src[i];

	return dest;
}

void *memset(void *mem_area, int c, size_t size)
{
	for (int i = 0; i < size; i++)
		mem_area[i] = c;

	return mem_area;
}
