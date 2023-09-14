#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: 0 always
 */
int main(void)
{
	int d, i, z;

	for (d = 48; d < 58; d++)
	{
		for (i = 49; i < 58; i++)
		{
			for (z = 50; z < 58; z++)
			{
				if (z > i && i > d)
				{
					putchar(d);
					putchar(i);
					putchar(z);
					if (d != 55 || i != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

