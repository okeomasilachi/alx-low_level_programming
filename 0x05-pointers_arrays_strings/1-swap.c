#include "main.h"

/**
 * swap_int - function swaps 2 ints
 * @a: first variable
 * @b: second variable
 *
 * Return: success
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
