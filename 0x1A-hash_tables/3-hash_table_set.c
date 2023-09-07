#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: Hash table to add or update key
 * @key: Key for the element insertion
 * @value: The value to insert for a paticular key
 *
 * Return: 1 on success and 0 on failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	hash_node_t *new = NULL;
	hash_node_t *cur = NULL;

	if (ht == NULL || key == NULL)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		new->next = NULL;
		ht->array[index] = new;
		return (1);
	}
	else
	{
		cur = ht->array[index];
		while (ht->array[index]->next != NULL)
		{
			if (strcmp(ht->array[index]->key, key) == 0)
			{
				ht->array[index]->value = strdup(value);
				ht->array[index] = cur;
				return (1);
			}
			ht->array[index] = ht->array[index]->next;
		}

		ht->array[index] = cur;

		new->next = ht->array[index];
		ht->array[index] = new;
		return (1);
	}
}
