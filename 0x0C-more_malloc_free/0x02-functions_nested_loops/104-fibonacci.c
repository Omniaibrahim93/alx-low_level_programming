#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2  followed by a new line
 * Return: 0 always
 */
int main(void)
{
	unsigned long int x, j2, k1, k2, j, k, j1;

	j = 1;
	k = 2;

	printf("%lu", j);

	for (x = 1; x < 91; x++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	k1 = k / 1000000000;
	k2 = k % 1000000000;
	j1 = j / 1000000000;
	j2 = j % 1000000000;

	for (x = 92; x < 99; ++x)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}

	printf("\n");

	return (0);
}
