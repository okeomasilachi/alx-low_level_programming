#include "lists.h"

/**
 * sum_dlistint - sums of all the data (n) of a dlistint_t linked list
 * @head: pointer to the head of the linked list
 *
 * Return: sum of all the data (n)
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *cur = head;
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}

	while (cur->prev != NULL)
	{
		cur = cur->prev;
	}

	while (cur != NULL)
	{
		sum += cur->n;
		cur = cur->next;
	}

	return (sum);
}
