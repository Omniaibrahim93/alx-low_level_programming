#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: the string to concatenate
 * @s2: the second string to concatenate
 * Return: the pointer to the new string,
 * or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int x = 0, y = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);

	x = 0;
	y = 0;

	if (s1)
	{
		while (x < len1)
		{
			str[x] = s1[x];
			x++;
		}
	}

	if (s2)
	{
		while (x < (len1 + len2))
		{
			str[x] = s2[y];
			x++;
			y++;
		}
	}
	str[x] = '\0';

	return (str);
}
