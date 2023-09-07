#include "hash_tables.h"

/**
 * key_index - Give the index of a key
 * @key: Key to evaluate for index
 * @size: size of the hash array
 *
 * Return: The index of the Key for a particular size
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_index;

	if (!key || !size)
		return (-1);

	key_index = (hash_djb2(key) % size);
	return (key_index);
}
