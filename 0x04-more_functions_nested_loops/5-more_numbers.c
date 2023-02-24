#include "main.h"

/**
 * more_numbers - prints numbers 1 to 14
 *
 * Return: it returns success
 */

void more_numbers(void)
{
	int i;
	int j;

	while (j <= 9)
	{
		while (i <= 14)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			i++;
		}
	_putchar('\n');
	j++;
	i = 0;
	}
}
