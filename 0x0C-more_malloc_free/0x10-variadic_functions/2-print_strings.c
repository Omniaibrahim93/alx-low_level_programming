#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @n: number of arguments
 * @separator: separator between strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int x;

	va_list list;

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(list, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && x == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	printf("\n");

	va_end(list);
}
