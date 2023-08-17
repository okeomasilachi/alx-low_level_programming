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

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: the position to insert the list
 * @n: value to input in node
 *
 * Return: pointer to the node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur = *h, *new;
	unsigned int len, i;

	if ((*h) == NULL && idx != 0)
		return (NULL);

	if (((*h) == NULL && idx == 0) || ((*h) != NULL && idx == 0))
		return (add_dnodeint(h, n));

	while ((*h)->prev != NULL)
		*h = (*h)->prev;

	len = dlistint_len(*h);
	if (idx > len)
		return (NULL);

	if (idx == len)
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
		new = malloc(sizeof(struct dlistint_s));
		new->n = n;
		for (i = 0; i != (idx - 1); i++)
			(*h) = (*h)->next;
		new->prev = (*h);
		new->next = (*h)->next;
		(*h)->next->prev = new;
		(*h)->next = new;
		(*h) = cur;
		return (new);
	}
}
