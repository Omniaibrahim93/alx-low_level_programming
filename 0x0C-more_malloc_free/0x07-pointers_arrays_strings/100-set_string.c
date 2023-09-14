#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @to: the string to set
 * @s: the pointer to pointer we need to set to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
