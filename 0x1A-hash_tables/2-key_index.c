#include "hash_tables.h"

/**
 * 
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int key_index;

    if (!key || ! size)
        return (-1);

    key_index = (hash_djb2(key) % size);
    return (key_index);
}
