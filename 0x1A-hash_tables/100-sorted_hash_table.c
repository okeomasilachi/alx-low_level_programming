#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));
	size_t i;

	if (ht == NULL)
		return NULL;

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return NULL;
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return ht;
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current = ht->shead;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return 0;
	index = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return 0;
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	new_node->sprev = NULL;
	new_node->snext = NULL;
	ht->array[index] = new_node;
	if (ht->shead == NULL)
	{	/* Insert into sorted linked list */
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else
	{
		current = ht->shead;
		/* while (ht->shead != NULL)
		{
			if (strcmp(new_node->key, ht->shead->key) < 0)
			{
				if (ht->shead->sprev == NULL)
				{
					new_node->snext = ht->shead;
					ht->shead->sprev = new_node;
					ht->shead = current;
					return (1);
				}
				else if (ht->shead->snext == NULL)
				{
					ht->shead->snext = new_node;
					new_node->sprev = ht->shead;
					ht->shead = current;
					return (1);
				}
				else
				{
					ht->shead->sprev->snext = new_node;
					new_node->sprev = ht->shead->sprev;
					ht->shead->sprev = new_node;
					new_node->snext = ht->shead;
					ht->shead = current;
					return (1);
				}
			}
			ht->shead = ht->shead->snext;
		} */
		
		/* current = ht->shead;
		while (current != NULL && strcmp(key, current->key) > 0)
		{
			prev = current;
			current = current->snext;
		}
		if (prev == NULL)
		{
			new_node->snext = current;
			current->sprev = new_node;
			ht->shead = new_node;
		}
		else if (current == NULL)
		{
			new_node->sprev = prev;
			prev->snext = new_node;
			ht->stail = new_node;
		}
		else
		{
			new_node->sprev = prev;
			new_node->snext = current;
			prev->snext = new_node;
			current->sprev = new_node;
		} */
	}
	return 1;
}

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return NULL;

	index = key_index((unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return current->value;
		current = current->next;
	}

	return NULL;
}

void shash_table_print(shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->shead;
	while (ht->shead != NULL)
	{
		printf("%s:%s\n", ht->shead->key, ht->shead->value);
		ht->shead = ht->shead->snext;
	}
	ht->shead = current;
}

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->stail;
	while (current != NULL)
	{
		printf("%s:%s\n", current->key, current->value);
		current = current->sprev;
	}
}

void shash_table_delete(shash_table_t *ht)
{
	size_t i;
	shash_node_t *current, *next;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}

	free(ht->array);
	free(ht);
}
