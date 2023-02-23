#include <stdio.h>

/**
 * _isupper - Checks for uppercase letters.
 * @c: The variable to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	char c;

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
