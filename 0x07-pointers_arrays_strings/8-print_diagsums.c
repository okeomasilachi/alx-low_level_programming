#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int ix, s1 = 0, s2 = 0;

	for (ix = 0; ix < size; ix++)
	{
		s1 += a[ix];
		a += size;
	}

	a -= size;

	for (ix = 0; ix < size; ix++)
	{
		s2 += a[ix];
		a -= size;
	}

	printf("%d, %d\n", s1, s2);
}
