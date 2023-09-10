#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates array of chars
 * & initializes it with a specific char
 * @c: the char to initialize the array c
 * @size: the size of the array to create
 * Return: the pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x = 0;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (0);
	}

	while (x < size)
	{
		*(ptr + x) = c;
		x++;
	}

	*(ptr + x) = '\0';

	return (ptr);
}
