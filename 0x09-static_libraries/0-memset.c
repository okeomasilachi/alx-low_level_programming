#include "main.h"

/**
 * _memset - entyr point
 * @s: pointed destination
 * @b: constant byte
 * @n: byte
 *
 * Return: success
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
