#include "main.h"

/**
 * _atoi - converts the string to an integer
 * @s: the string to be converted
 * Return: int converted from the string
 */
int _atoi(char *s)
{
	int x, y, n, l, f, d;

	x = 0;
	y = 0;
	n = 0;
	l = 0;
	f = 0;
	d = 0;

	while (s[l] != '\0')
		l++;

	while (x < l && f == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			d = s[x] - '0';
			if (y % 2)
				d = -d;
			n = n * 10 + d;
			f = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			f = 0;
		}
		x++;
	}

	if (f == 0)
		return (0);

	return (n);
}
