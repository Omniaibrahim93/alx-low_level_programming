#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as arguments
 * @separator: string to be printed
 * @n: number of integers passed to function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && x == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}

	va_end(list);

	printf("\n");
}
