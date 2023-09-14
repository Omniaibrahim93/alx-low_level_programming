#include "main.h"

/**
 * _strncpy - copy a string
 * @n: the amount of bytes to copy
 * @src: the source string
 * @dest: the dest string
 *
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;

	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
