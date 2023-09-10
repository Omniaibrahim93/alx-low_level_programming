#include "main.h"

/**
 * factorial - returns the number factorial
 * @n: number to calculate factorial from
 * Return: the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
