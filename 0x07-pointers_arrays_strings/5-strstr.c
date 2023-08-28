#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @needle: the substring to look for
 * @haystack: the string to search in
 * Return: the pointer to the beginning of the located substring
 * or NULL if there is no substring found
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[x + y] != needle[y])
				break;
		}
		if (!needle[y])
			return (&haystack[x]);
	}
	return (NULL);
}
