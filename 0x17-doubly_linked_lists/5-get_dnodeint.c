#include "lists.h"

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
