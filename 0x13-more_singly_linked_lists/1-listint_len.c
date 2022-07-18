#include "lists.h"

/**
 * listint_len - The function returns the number of elements in a linked list
 * @h: The pointer to the linked list
 *
 * Return: The number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t len;

	len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
return (len);
}
