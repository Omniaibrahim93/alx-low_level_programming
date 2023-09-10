#include "main.h"
#include <stdlib.h>
/**
 *argstostr - concatenates arguments of the program
 *@ac: the argument count.
 *@av: the pointer to array of size @ac.
 *Return: if ac == 0 or av == null (NULL)),
 *Pointer to new string or NULL on fail.
 */
char *argstostr(int ac, char **av)
{
	int x, y, z, size;
	char *arg;

	z = 0;
	size = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	x = 0;
	while (x < ac)
	{
		y = 0;
		while (av[x][y])
		{
			size++;
			y++;
		}
		size++;
		x++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	x = 0;
	while (x < ac)
	{
		y = 0;
		while (av[x][y])
		{
			arg[z] = av[x][y];
			z++;
			y++;
		}
		arg[z] = '\n';
		x++;
		z++;
	}
	arg[z] = '\0';
	return (arg);
}
