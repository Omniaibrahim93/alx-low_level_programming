#include "main.h"

 /**
 * _strcat - concatenates two strings
 * @src: the string to add
 * @dest: the string to append to..
 *
 * Return: the pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	y = 0;
	x = 0;

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';

	return (dest);
}