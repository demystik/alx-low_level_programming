#include "lists.h"

/**
 * dlistint_len - This function returns the number of elements
 *  in a linked dlistint_t
 *  Author - Thaoban Abdrasheed
 *  @h: The pointer to the head
 *  Return: The numbers of elements
 */
size_t dlistint_len(const dlistint_t *h)
{

	const dlistint_t *count;
	size_t i;

	i = 0;
	count = h;
	while (count != NULL)
	{
		count = count->next;
		i++;
	}
return (i);
}
