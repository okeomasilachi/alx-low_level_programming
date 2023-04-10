#include "main.h"

/**
 * print_binary - prints the binary form of a number
 * @n: variable to be converted
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n >= 2)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
