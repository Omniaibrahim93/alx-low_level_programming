#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @c: the char to find
 * @s: the string to search
 * Return: the pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
		int x;

		while (1)
		{
			x = *s++;
			if (x == c)
			{
				return (s - 1);
			}
			if (x == 0)
			{
				return (NULL);
			}
		}
}
