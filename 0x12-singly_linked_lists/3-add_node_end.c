#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - This function append node at the end of list
 * @head: pointer the points to pointer to the list
 * @str: pointer to chars which is string data of the...
 * Return: address to the address of first node or Null if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	size_t lenght;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}


	new->str = strdup(str);

	for (lenght = 0; str[lenght]; lenght++)
		;

	new->len = lenght;
	new->next = NULL;
	last = *head;

	if (last == NULL)
	{
		*head = new;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
