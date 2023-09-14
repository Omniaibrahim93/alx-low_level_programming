#include "main.h"

/**
 * swap_int - swaps  values of two integers
 * @b: pointer to the  second value
 * @a: pointer to the first value
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
