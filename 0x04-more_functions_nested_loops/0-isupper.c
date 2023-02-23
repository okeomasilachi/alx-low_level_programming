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

	if (c >= 69 && c <= 90)
	{
		printf("%c: ", c);
		return (1);
	}
	else
	{
		printf("%c: ", c);
		return (0);
	}
}
