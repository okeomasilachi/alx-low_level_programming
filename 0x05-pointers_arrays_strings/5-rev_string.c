#include "main.h"

/**
 * rev_string - reverses a sring
 * @s: string to be reversed
 *
 * Return: success
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int mid = len / 2;
	char stg;
	int i;

	for (i = 0; i < mid; i++)
	{
		stg = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = stg;
	}
}
