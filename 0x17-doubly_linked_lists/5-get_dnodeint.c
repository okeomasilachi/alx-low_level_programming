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
 * get_dnodeint_at_index - gets the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: position to return
 *
 * Return: pointer to the specified node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur = head;
	unsigned int len, i;

	if (cur == NULL)
	{
		return (NULL);
	}

	while (cur->prev != NULL)
	{
		cur = cur->prev;
	}

	len = dlistint_len(cur);

	if (index > len)
	{
		return (NULL);
	}

	for (i = 0; i != index; i++)
		cur = cur->next;

	return (cur);
}
