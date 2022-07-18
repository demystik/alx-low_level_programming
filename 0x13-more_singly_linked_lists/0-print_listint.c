#include "lists.h"

/**
 * print_listint - This function prints all the elements of a listint_t list.
 * @h: The pointer to the node
 *
 * Return: the address to the head of the node
 */

size_t print_listint(const listint_t *h)
{
	size_t len;

	len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
return (len);
}
