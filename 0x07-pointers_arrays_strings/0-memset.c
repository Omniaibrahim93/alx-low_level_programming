#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @n: the x times to copy b
 * @s: the memory area to be filled
 * @b: the char to copy
 * Return: the pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
		s[d] = b;
	}

	return (s);
}
