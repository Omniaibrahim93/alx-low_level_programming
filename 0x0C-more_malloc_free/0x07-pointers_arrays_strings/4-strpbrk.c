#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @accept: the stringcontaining the bytes to look for
 * @s: the string to search
 * Return: the pointer to the byte in s that matches one of the bytes in accept
 * or NULL if threr are no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; *s != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (*s == accept[y])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
