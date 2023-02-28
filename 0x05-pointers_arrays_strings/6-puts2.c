#include "main.h"

/**
 * put2 -  prints every other character of a string
 *@str: the string to be printed
 *
 * Return: success
 */

void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i <= len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str);
		}
	}
	_putchar('\n');
}
