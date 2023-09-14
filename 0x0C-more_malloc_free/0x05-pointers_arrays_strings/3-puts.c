#include "main.h"

/**
 * _puts - prints the string to the stdout
 * @str: pointer to  string to print
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
