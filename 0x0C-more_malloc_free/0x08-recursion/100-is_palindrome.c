#include "main.h"

int check_palindrome(char *s, int i, int len);
int _strlength_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to reverse
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlength_recursion(s)));
}

/**
 * _strlength_recursion - returns the length of string
 * @s: string to calculate the length of
 * Return: length of the string
 */
int _strlength_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlength_recursion(s + 1));
}

/**
 * check_palindrome - checks the characters
 * recursively for palindrome
 * @i: iterator
 * @len: the length of the string
 * @s: the string to check
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palindrome(s, i + 1, len - 1));
}
