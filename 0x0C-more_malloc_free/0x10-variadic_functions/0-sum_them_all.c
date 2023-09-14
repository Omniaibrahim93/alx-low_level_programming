#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of parameters
 * @n: number of arguments passed
 * Return: the sumation
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int x;
	va_list list;

	va_start(list, n);

	for (x = 0; x < n; x++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
