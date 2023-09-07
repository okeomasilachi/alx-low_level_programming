#include "hash_tables.h"

/**
 * hash_table_print - prints the contents of a hash table in the format
 *					"{key1: value1, * key2: value2, ...}".
 * @ht: The parameter `ht` is a pointer to a hash_table_t structure.
 *
 * Return: void return
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cur = NULL;
	unsigned long int i = 0, j = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;

		if (ht->array[i] != NULL)
		{
			cur = ht->array[i];
			while (ht->array[i] != NULL)
			{
				if (j == 0)
				{
					j += 1;
					printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
					ht->array[i] = ht->array[i]->next;
					continue;
				}
				if (j == 1)
					printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);

				if (ht->array[i]->next != NULL)
					printf(", ");
				ht->array[i] = ht->array[i]->next;
			}
			ht->array[i] = cur;
		}
	}
	printf("}\n");
}
