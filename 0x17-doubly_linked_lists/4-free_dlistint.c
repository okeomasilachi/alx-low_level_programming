#include "lists.h"

/**
 * free_dlistint - frees memomry allocated for list
 * @head: pointer to the head of the list
 *
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	free_dlistint(head->next);
	free(head);
}
