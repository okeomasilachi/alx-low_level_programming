#include "main.h"

/**
 * main - entry point of program
 *
 * Return: success
 *
 * print_numbers - prints numbers from 0 to 9
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
