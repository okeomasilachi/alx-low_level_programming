#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The table to search
 * @key: The key to search for
 *
 * Return: The value if it exist; else NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *cpy = NULL;
	char *ret = NULL;
	unsigned long idx;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((unsigned char *) key, ht->size);
	cpy = ht->array[idx];

	if (ht->array[idx] == NULL)
		return (NULL);

	while (ht->array[idx] != NULL)
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
		{
			ret = ht->array[idx]->value;
			ht->array[idx] = cpy;
			return (ret);
		}
		ht->array[idx] = ht->array[idx]->next;
	}
	ht->array[idx] = cpy;
	return (NULL);
}
