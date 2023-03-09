#include "main.h"

/**
 * _pow_recursion - entry point of the programe
 * @x: variable to be powerd
 * @y: power
 *
 * Return: success
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
