#include "lists.h"

/**
 * dlistint_len- gets the lenght of a dlistint_t
 * @head: pointer to the head of the list
 *
 * Return: the lenght of the list
*/
size_t dlistint_len(const dlistint_t *head)
{
	const dlistint_t *cur = head;
	int i = 0;

	if (head == NULL)
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
 * del_node - deletes node at the end or in between two nodes in a
 *				dlistint_t list
 * @head: pointer to the head of the list
 * @index: the index to delete
 * @len: the length of the list
 *
 * Return: 1 on success
*/
int del_node(dlistint_t **head, unsigned int index, unsigned int len)
{
	dlistint_t *cur;
	unsigned int i;

	(void)head;

	if (index == (len - 1))
	{
		cur = (*head);
		for (i = 0; i != (index); i++)
			(*head) = (*head)->next;

		(*head)->prev->next = NULL;
		(*head)->prev = NULL;
		free(*head);
		(*head) = cur;
		return (1);
	}
	else
	{
		cur = (*head);
		for (i = 0; i != index; i++)
			(*head) = (*head)->next;

		(*head)->prev->next = (*head)->next;
		(*head)->next->prev = (*head)->prev;
		(*head)->next = NULL;
		(*head)->prev = NULL;
		free(*head);
		(*head) = cur;
		return (1);
	}
}

/**
 * delete_dnodeint_at_index - deletes a node at an index in a dlistint_t list
 * @head: pointer to the head of the list
 * @index: Position to be deleted
 *
 * Return: 1 on success else -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur;
	unsigned int len;

	if ((*head) == NULL)
		return (-1);

	len = dlistint_len(*head);

	if (index > len)
		return (-1);

	if ((*head) != NULL && index == 0)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
			(*head) = NULL;
			return (1);
		}

		cur = (*head)->next;
		(*head)->next = NULL;
		cur->prev = NULL;
		free(*head);
		*head = cur;

		return (1);
	}

	while ((*head)->prev != NULL)
		*head = (*head)->prev;

	return (del_node(head, index, len));
}
