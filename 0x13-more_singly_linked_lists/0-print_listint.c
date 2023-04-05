#include "lists.h"

/**
 * print_listint - prints all nodes data
 *
 * @h: the haed noe pointer
 *
 * Return: the numebrof nodes in list
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
