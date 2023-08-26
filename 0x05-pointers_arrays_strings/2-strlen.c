#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of  string
 */
int _strlen(char *s)
{
	int t;

	t = 0;

	while (s[t] != '\0')
	{
		t++;
	}

	return (t);
}
