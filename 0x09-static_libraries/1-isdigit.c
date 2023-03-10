#include "main.h"

/**
 * _isdigit - Checks if variable is a digit.
 * @c: The parameter to be checked.
 *
 * Return: 1 c is a number, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
