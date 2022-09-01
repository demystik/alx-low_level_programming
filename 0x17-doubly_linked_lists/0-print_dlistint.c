#include "lists.h"

/**
 * print_dlistint - This function prints all the elements of
 * dlistint_t list
 * Author - Abdrasheed Thaoban
 * @h: The pointer to the head
 *
 * Return: The number of the nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *count;

	count = h;
	i = 0;
	while (count != NULL)
	{
		printf("%i\n", count->n);
		i++;
		count = count->next;
	}
return (i);
}
