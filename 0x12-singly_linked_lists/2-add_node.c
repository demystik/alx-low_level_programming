#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - This function add a new node at the beginning of a list_t list
 * @head: The head of node that will get replaced
 * @str: pointer to char
 *
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t lenght;

	list_t *new_node;

	lenght = 0;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);

	for (lenght = 0; str[lenght]; lenght++)
		;

	new_node->len = lenght;

	new_node->next = (*head);

	(*head) = new_node;

	return (new_node);
}
