#include "lists.h"
#include <stdio.h>

/**
 * print_list - This function prints all the elements of a list_t list
 * @h: the pointer to the list
 *
 * Return: The number of nodes
 */

int print_list(const list_t *h)
{
	int i;

	i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] ", h->len);
			 printf("%s\n", h->str);
		}
		else
			printf("[0] (nil)\n");

		h = h->next;
		i++;
	}
	return (i);
}
