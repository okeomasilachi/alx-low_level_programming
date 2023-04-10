#include "main.h"

/**
 * get_bit - function call
 * @n: figure to check
 * @index: position to print
 *
 * Return: number at perticular index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = index;
	unsigned long int mk = 1UL << i;

	if (i >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	return ((n & mk) != 0);
}
