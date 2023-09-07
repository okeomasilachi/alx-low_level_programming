#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
	puts(ht->array[key_index((unsigned char *)"betty", ht->size)]->key);
    puts(ht->array[key_index((unsigned char *)"betty", ht->size)]->value);
	
    hash_table_set(ht, "betty", "okeoma");
	
	puts(ht->array[key_index((unsigned char *)"betty", ht->size)]->key);
    puts(ht->array[key_index((unsigned char *)"betty", ht->size)]->value);
	return (EXIT_SUCCESS);
}
