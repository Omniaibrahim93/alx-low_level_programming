#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: 0 always
 */
int main(void)
{
	int i;
	unsigned long int j, z, next, sum;

	j = 1;
	z = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + z;
		j = z;
		z = next;
	}

	printf("%lu\n", sum);

	return (0);
}

