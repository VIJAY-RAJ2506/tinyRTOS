#ifndef __MEMCTL_API_H__
#define __MEMCTL_API_H__

/**
 * memcpy() - Memory copy api
 * @dest: Destination buffer
 * @src: Source buffer
 * @len: Length of the data to be copied
 *
 * Return: Address of the destination buffer
 */
void *memcpy(void *dest, void *src, size_t size);

/**
 * memset() - APi to populate memory buffer with constant byte
 * @mem_area: Memory buffer to be filled with constant byte
 * @c: Charater to be populated in the memory buffer
 * @size: Size of the memory buffer
 *
 * Return: Address of the memory buffer
 */
void *memset(void *mem_area, int c, size_t size);


#endif
