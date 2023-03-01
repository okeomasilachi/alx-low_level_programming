#include "main.h"

/**
 * puts_half - cuts input to 2and print later half
 * @str: input
 *
 * Return: success
 */

void puts_half(char *str)
{
	int i = 0;
	int lan = 0;
	int n;

	while (str[i++])
		lan++;
	if ((lan % 2) == 0)
		n = lan / 2;
	else
		n = (lan + 1) / 2;
	for (i = n; i < lan; i++)
		_putchar(str[i]);
	_putchar('\n');
}
