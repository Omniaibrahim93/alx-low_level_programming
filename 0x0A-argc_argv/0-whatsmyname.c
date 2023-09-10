#include <stdio.h>
#include "main.h"

/**
 * main - prints program name
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0 always
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

