#include "main.h"

/**
 * binary_to_uint - converts binary to base 10
 * @b: binary to be converted
 *
 * Return: the converted number, or 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	int l = (strlen(b) - 1), k;
	int con = 1, ans = 0;

	if (b == NULL)
		return (0);

	for (k = l; k >= 0; k--)
	{
		if (b[k] == '1')
		{
			ans += con;
		}
		con *= 2;

		if (b[k] != '1' && b[k] != '0')
			return (0);
	}

	return (ans);
}
