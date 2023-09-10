#include <stdio.h>
#include "main.h"

/**
 * _stoi - converts a string to int
 * @s: string to  converte
 * Return: the  converted int
 */
int _stoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			f = 1;
			n = n * 10 + digit;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: rhe  number of arguments
 * @argv: rhe array of arguments
 * Return: 0 if or 1 otherwise
 */
int main(int argc, char *argv[])
{
	int res, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _stoi(argv[1]);
	num2 = _stoi(argv[2]);
	res = num1 * num2;

	printf("%d\n", res);

	return (0);
}
