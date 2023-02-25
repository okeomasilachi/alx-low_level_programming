#include "main.h"

/**
 * print_line - prints the character "_" the number of times pecified
 * @n: specified number of times
 * Return: success 0
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	_putchar('\n');
	}
	else
		_putchar('\n');
}
