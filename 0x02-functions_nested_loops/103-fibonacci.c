#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long n1 = 0, n2 = 1, nall;
	float Total;

	while (1)
	{
		nall = n1 + n2;
		if (nall > 4000000)
			break;

		if ((nall % 2) == 0)
			Total += nall;

		n1 = n2;
		n2 = nall;
	}
	printf("%.0f\n", Total);

	return (0);
}
