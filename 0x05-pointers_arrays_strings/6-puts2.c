#include "main.h"

/**
 * puts2 -  prints every other character of a string
 * @str: the string to be printed
 *
 * Return: success
 */

void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i++])
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
