#include "hash_tables.h"

/**
 * hash_table_set - This function adds an
 * element to the hash table
 * @ht: is the hash table you want to add
 * or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: value associated with the key. value must 
 * be duplicated. value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node;
    hash_table_t *ptr;
    unsigned long int hashed_value;

    if (!ht)
        return (NULL)
    ptr = ht;

    ptr->array malloc(sizeof(hash_node_t));
    hashed_value = key_index((unsigned char *)key, 1024);
    ptr->array->key = key;
    ptr->array->value = ;

    







}