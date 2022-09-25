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
unsigned long int i;

arr = malloc(sizeof(hash_table_t));
if (!arr)
{
return (NULL);
}
arr->size = size;
arr->array = malloc(sizeof(hash_node_t *) * size);
if (arr->array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr->array[i] = NULL;
}
return (arr);
}
