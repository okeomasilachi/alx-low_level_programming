#include "main.h"

/**
 * set_bit - function sets bit to 1
 * @n:  parameter to set
 * @index: index to set
 *
 * Return: on success 1 else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int k = index;

	*n |= BV << k;

	if (*n << k == '1')
		return (1);
	else
		return (-1);
}
