#include "main.h"

/**
 * _strstr - entry point
 * @haystack: viriable 1
 * @needle: veriable 2
 *
 * Return: success
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if  (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return ((char *)haystack);
				i++;

			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
