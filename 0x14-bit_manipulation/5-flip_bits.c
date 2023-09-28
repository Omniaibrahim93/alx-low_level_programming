#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: the first number
 * @m: the second number to convert to
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter;
	unsigned long int diff;

	counter = 0;
	diff = n ^ m;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
