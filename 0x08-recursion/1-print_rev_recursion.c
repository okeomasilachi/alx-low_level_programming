#include "main.h"

/**
 * _print_rev_recursion - entry point. printsa string in revers
 * @s: string to be reversed
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
