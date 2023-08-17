#include "lists.h"

/**
 * dlistint_len- gets the lenght of a dlistint_t
 * @h: pointer to the head of the list
 *
 * Return: the lenght of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *cur = h;
	int i = 0;

	if (h == NULL)
	{
		return (i);
	}

	while (cur->prev != NULL)
	{
		cur = cur->prev;
	}

	while (cur != NULL)
	{
		cur = cur->next;
		i++;
	}

	return (i);
}
