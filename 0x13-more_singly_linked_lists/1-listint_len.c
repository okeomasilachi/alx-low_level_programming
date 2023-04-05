#include "lists.h"

/**
 * listint_len - calculates number of element
 * @h: parameter to be used
 *
 * Return: returns the number of elementin a list
 *
 */

size_t listint_len(const listint_t *h)
{
	int k = 0;

	while (h != NULL)
	{
		h = h->next;
		k++;
	}

	return (k);
}
