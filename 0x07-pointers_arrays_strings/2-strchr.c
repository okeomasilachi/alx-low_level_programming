#include "main.h"

/**
 * _strchr - entry point
 * @s: string
 * @c: pointer to c
 *
 * Retune: success (s)
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
		return ((char *) s);
		}
		s++;
	}
	return (NULL);
}
