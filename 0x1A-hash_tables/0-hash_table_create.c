#include "hash_tables.h"

/**
 * hash_table_create - This function creates a hash table
 * @size: the size of the array
 *
 * Return: pointer to a newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *arr;
arr = malloc(sizeof(hash_table_t) * size);
if (!arr)
{
return (NULL);
}
return (arr);
}
