#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte \0
 * to  buffer pointed to by dest
 * @src: the string to be copied
 * @dest: rhe pointer to the buffer in which
 * we copy the string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
