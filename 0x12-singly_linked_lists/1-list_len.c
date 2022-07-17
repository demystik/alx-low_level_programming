#include "lists.h"
#include <stdio.h>

/**
 * list_len - This function returns the number of elements in a linked list_t
 * @h: pointer variable of the structure
 *
 * Return: the number of elements in a linked list
 */

int list_len(const list_t *h)
{
	int i;
	
	i = 0;
	while (h != NULL)
	{
		 i++;
		 h = h->next;
	}


return (i);
}
