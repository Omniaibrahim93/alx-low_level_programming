#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string to append
 *
 * Return: A pointer to the resulting concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;

	/* Calculate length of destination string */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Copy source string to the end of destination */
	while (src[src_len] != '\0')
	{
		dest[dest_len] = src[src_len];
		dest_len++;
		src_len++;
	}

	/* Null-terminate the concatenated string */
	dest[dest_len] = '\0';

	return (dest);
}
