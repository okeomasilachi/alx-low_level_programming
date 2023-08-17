#include "lists.h"

/**
 * add_dnodeint_end - inserts a node at the end of dlistint_t list
 * @head: pointer to the head of the list
 * @n: value for the nade to hold
 *
 * Return: pointer to the new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *cur = *head, *new_head = cur;

	if (new == NULL)
	{
		return (NULL);
	}
	if (cur == NULL)
	{
		new->prev = NULL;
		new->n = n;
		new->next = (*head);
		(*head) = new;
	}
	else
	{
		if (cur != NULL && cur->next != NULL)
		{
			while (cur->next != NULL)
				cur = cur->next;
		}
		cur->next = new;
		new->prev = cur;
		new->n = n;
		new->next = NULL;
		(*head) = new_head;
	}
	return (new);
}
