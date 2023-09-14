#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * followed by a new line, except q and e
 * Return: 0 always
 */
int main(void)
{
	char chh = 'a';

	while (chh <= 'z')
	{
		if (chh != 'e' && chh != 'q')
		{
			putchar(chh);
		}
		chh++;
	}
	putchar('\n');
	return (0);
}
