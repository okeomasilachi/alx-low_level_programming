#include "main.h"

/**
 * print_binary - print the binary representation of a number
 * @n: number to convert
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1), i;

for (i = 0; i < sizeof(unsigned long int) * 8; i++)
{
putchar((n & mask) ? '1' : '0');
mask >>= 1;
}
putchar('\n');
}
