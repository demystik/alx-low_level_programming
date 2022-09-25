#include "hash_tables.h"

/**
 * key_index - This function computes the index of the key
 * @key: The key string to compute an index from
 * @size: size of the array
 *
 * Return: the index at which the key/value pair should
 * be stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash_value;

    hash_value = hash_djb2(key);

    return(hash_value % size);
}