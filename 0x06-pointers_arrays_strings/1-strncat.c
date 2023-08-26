#include "main.h"

/**
 * _strncat - concatenates bytes from string to another
 * @n: the amount of bytes of str to concatenate
 * @src: source string
 * @dest: destination string
 *
 * Return: the pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';

	return (dest);
}