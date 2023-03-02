#include "main.h"

/**
 * _strcat - concatinates two strings
 * @dest: appended
 * @src: souce string
 *
 * Return: success
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int ld = strlen(dest);
	int ls = strlen(src);

	for (i = 0; i <= ls; i++)
	{
		dest[ld + i] = src[i];
	}

	return (dest);
}
