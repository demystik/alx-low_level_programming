#include "hash_tables.h"
/**
 * hash_table_set - This function adds an * element to thehash table
 * @ht: is the hash table you want to add
 * @key: is the key. key can not be an empty string
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_node;
hash_table_t *ptr;
char *copied_value;
unsigned long int hashed_value, i;
ptr = ht;
if (ptr == NULL || key == NULL || value == NULL)
{
return (0);
}
copied_value = strdup(value);
if (copied_value == NULL)
{
return (0);
}
hashed_value = key_index((const unsigned char *)key, ptr->size);
for (i = hashed_value; ptr->array[i]; i++)
{
if (strcmp(ptr->array[i]->key, key) == 0)
{
free(ptr->array[i]->value);
ptr->array[i]->value = copied_value;
return (1);
}
}
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
free(copied_value);
return (0);
}
new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(new_node);
return (0);
}
new_node->value = copied_value;
new_node->next = ptr->array[hashed_value];
ptr->array[hashed_value] = new_node;
return (1);
}
