#include "main.h"

/**
 * _isupper - Checks for uppercase Alphabets.
 * @c: The parameter to be checked.
 *
 * Return: 1 if Alphabet is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
