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
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}
