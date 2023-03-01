#include "main.h"

/**
 * print_array - print the n value of an array
 * @a: name of array
 * @n: n term to print
 *
 * Return: success
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
		{
			continue;
		}
		printf(", ");
	}

	printf("\n");
}
