#include "main.h"

/**
 * _puts_recursion - entry point
 * @s: sting input of type char
 *
 * Return: the program write to standard output
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
