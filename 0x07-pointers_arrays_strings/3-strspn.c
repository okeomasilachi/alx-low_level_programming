#include "main.h"

/**
 * _strspn - entry point
 * @s: compiared
 * @accept: comparation with
 *
 * Return: success il
 */

unsigned int _strspn(char *s, char *accept)
{
	int il = 0;
	int i;
	int j;
	int ls = strlen(s);
	int la = strlen(accept);

	for (i = 0; i < ls; i++)
	{
		int k = 0;

		for (j = 0; j < la; j++)
		{
			if (accept[j] == s[i])
			{
				k = 1;
				break;
			}
		}
		if (k < 1)
			break;
		else if (k == 1)
			il++;
	}
	return (il);
}
