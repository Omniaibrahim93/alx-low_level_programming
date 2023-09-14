#include "main.h"

/**
 * *_memcpy - copies memory area
 * @n: the number of bytes to copy
 * @src: the memory area to copy from
 * @dest: the destination memory area
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
		dest[d] = src[d];
	}

	return (dest);
}
