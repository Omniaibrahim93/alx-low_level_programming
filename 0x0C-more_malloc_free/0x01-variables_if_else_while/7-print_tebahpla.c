#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * followed by a new line
 * Return: 0 always
 */
int main(void)
{
	char chh;

	for (chh = 'z'; chh >= 'a'; chh--)
	{
		putchar(chh);
	}
	putchar('\n');
	return (0);
}

