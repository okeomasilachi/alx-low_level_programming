#include "main.h"

/**
 * main - entry point of program
 *
 * Return: success
 *
 * _putchar - writes the character c to stdout
 */

void print_numbers(void)
{
	int o = 0;

	for (o = 0; o <= 9; o++)
	{
		_putchar(o);
	}
	_putchar('\n');

	return (0);
}
