#include "lists.h"

/**
 * add_dnodeint - add node at the start of a linked list
 * @head: pointer to the head of the list
 * @n: value to add to the node
 *
 * Return: pointer to the new list
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	if (*head != NULL)
	{
		while ((*head)->prev != NULL)
			(*head) = (*head)->prev;
	}
	if (*head == NULL)
	{
		new->prev = NULL;
		new->n = n;
		new->next = *head;
		*head = new;
	}
	else
	{
		new->prev = NULL;
		new->n = n;
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
