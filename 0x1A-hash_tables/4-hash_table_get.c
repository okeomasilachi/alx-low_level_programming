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

	if (ht == NULL || key == NULL)
		return (NULL);

	cpy = ht->array[key_index((unsigned char *) key, ht->size)];

	if (cpy == NULL)
		return (NULL);

	while (cpy->next != NULL)
	{
		if (strcmp(cpy->key, key) == 0)
			return (strdup(cpy->value));

		cpy = cpy->next;
	}
	return (NULL);
}
