#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - This function append node at the end of list
 * @head: pointer the points to pointer to the list
 * @str: pointer to chars which is string data of the...
 * Return: address to the last new element or Null if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	last = *head;

	new->str = strdup(str);

	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new;

	return (new);
}	
