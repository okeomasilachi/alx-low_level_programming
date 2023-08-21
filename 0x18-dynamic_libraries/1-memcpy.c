#include "main.h"

/**
 * _memcpy - entry point
 * @dest: destination
 * @src: source
 * @n: constant byte
 *
 * Return: success (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (dest == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
