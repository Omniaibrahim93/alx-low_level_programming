#include <stdlib.h>
#include "main.h"

/**
 * *_memfill - fills memory with a constant byte
 * @s: the memory to fill
 * @c: the char to copy
 * @n: the x times to copy
 * Return: the pointer to the memory area s
 */
char *_memfill(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = c;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: the number of elements in array
 * @size: the size of each element
 * Return: the pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pntr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pntr = malloc(size * nmemb);

	if (pntr == NULL)
		return (NULL);

	_memfill(pntr, 0, nmemb * size);

	return (pntr);
}
