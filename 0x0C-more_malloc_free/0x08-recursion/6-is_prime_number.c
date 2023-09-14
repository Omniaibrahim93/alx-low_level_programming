#include "main.h"

int my_actual_prime(int n, int i);

/**
 * is_prime_number - erturns if an integer is a prime number
 * @n: number to check
 * Return: 0 if n is not a prime number,
 * 1 if its a prime number,
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (my_actual_prime(n, n - 1));
}

/**
 * my_actual_prime - check if a number is prime
 * @i: iterator
 * @n: the number to evaluate
 * Return: 1 is prime or 0 if not
 */
int my_actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (my_actual_prime(n, i - 1));
}
