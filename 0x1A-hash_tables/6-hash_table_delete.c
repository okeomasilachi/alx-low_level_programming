#include "hash_tables.h"


/**
 * function - recursively frees memory
 *			allocated for a linked list of hash nodes.
 * @list: The parameter "list" is a pointer to a hash_node_t structure.
 * 
 * Return: nothing, as indicated by the "void" return type.
 */
void _free(hash_node_t *list)
{
	if (list == NULL)
		return;

	_free(list->next);
	free(list->key);
	free(list->value);
	free(list);
}

/**
 * hash_table_delete - Delete's a hash table and
 * free the memory allocated for
 * it.
 * 
 * @param ht The parameter "ht" is a pointer to a hash table structure.
 * 
 * @return In the given code, if the `ht` parameter is `NULL`, the function will return without
 * performing any further actions. If `ht` is not `NULL`, the function will free the memory allocated
 * for the hash table and its elements. However, the function does not explicitly return any value.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned lont int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;

		if (ht->array[i] != NULL)
			_free(ht->array[i]);
	}
	for (i = 0; i < ht->size; i++)
		free(ht->array[i]);
	
	free(ht->array);
	free(ht);
}
