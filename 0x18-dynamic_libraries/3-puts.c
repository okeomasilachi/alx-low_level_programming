#include "main.h"

/**
 * _puts - function that writes to standard output
 * @str: paramiter to be written
 *
 * Return: success
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
