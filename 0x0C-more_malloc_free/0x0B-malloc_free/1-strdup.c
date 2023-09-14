#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies string given as a parameter
 * @str: string to be duplicated
 * Return: the pointer to the copied string,
 * or NULL
 */
char *_strdup(char *str)
{
	char *cop;
	unsigned int len, x;

	len = 0;
	x = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	cop = malloc(sizeof(char) * (len + 1));

	if (cop == NULL)
		return (NULL);

	while ((cop[x] = str[x]) != '\0')
		x++;

	return (cop);
}
