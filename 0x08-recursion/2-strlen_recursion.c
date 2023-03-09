#include "main.h"

/**
 * _strlen_recursion - entry point of he program
 * @s: the string to perform operation on
 * @i: integer to compiar
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (i);
}
