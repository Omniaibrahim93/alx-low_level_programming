#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: int to extract the last digit from
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int t;

	if (n < 0)
		n = -n;

	t = n % 10;

	if (t < 0)
		t = -t;

	_putchar(t + '0');

	return (t);
}

