#include "hash_tables.h"

/**
 * hash_table_delete - Delete's a hash table and
 *				free the memory allocated for it.
 * @ht: pointer to a hash table structure.
 *
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
	size_t i;
	hash_node_t *del = NULL, *nxt = NULL;

	for (i = 0; i < ht->size; i++)
	{
		del = ht->array[i];
		while (del != NULL)
		{
			nxt = del->next;
			free(del->key);
			free(del->value);
			free(del);

			del = nxt;
		}
	}
	free(ht->array);
	free(ht);
}
