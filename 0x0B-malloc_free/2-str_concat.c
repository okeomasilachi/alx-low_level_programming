#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	char *cs;
	int i, ci = 0, lt = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		lt++;

	cs = malloc(sizeof(char) * lt);

	if (cs == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		cs[ci++] = s1[i];

	for (i = 0; s2[i]; i++)
		cs[ci++] = s2[i];

	return (cs);
}
