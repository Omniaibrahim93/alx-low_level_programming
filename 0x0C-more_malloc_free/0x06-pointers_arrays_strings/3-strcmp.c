#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: 1st string to compare
 * @s2: 2st string to compare
 *
 * Return: if s1 is less than s2less than 0, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s2++;
		s1++;
	}
	return (*s1 - *s2);
}
