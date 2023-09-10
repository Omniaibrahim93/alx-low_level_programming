#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocate the memory using malloc
 * @b: the number of bytes to allocate
 * Return: the pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pntr;

	pntr = malloc(b);

	if (pntr == NULL)
	{
		exit(98);
	}

	return (pntr);
}
