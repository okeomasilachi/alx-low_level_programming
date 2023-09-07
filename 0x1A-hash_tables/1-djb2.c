#include "hash_tables.h"

/**
 * 
*/
unsigned long int hash_djb2(const unsigned char *str)
{
    int c;
    unsigned long int hash;

    hash = 5381;
    while ((c = *str++))
    {
        /* hash + 33 + c */
        hash = ((hash << 5) + hash) + c;
    }
    return (hash);
}
