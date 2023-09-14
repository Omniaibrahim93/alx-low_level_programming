#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0 always
 */
int main(void)
{
	int d, z;

	for (d = 48; d <= 56; d++)
	{
		for (z = 49; z <= 57; z++)
		{
			if (z > d)
			{
				putchar(d);
				putchar(z);
				if (d != 56 || z != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

