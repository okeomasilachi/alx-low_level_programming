#include "lists.h"

/**
 * print_dlistint - prints the values of a doubly linked list
 * @h: pointer to the headof the list
 *
 * Return: the number of items in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *cur = h;
	int i = 0;

	if (h == NULL)
		return (i);

	while (cur->prev != NULL)
		cur = cur->prev;

	while (cur != NULL)
	{
		printf("%d\n", cur->n);
		cur = cur->next;
		i++;
	}

	return (i);
}
