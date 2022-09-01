#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 *  at a given position.
 *  Author - Abdrasheed Thaoban
 *  @h: The pointer that points to head pointer
 *  @idx: the index of the list where node should be added
 *  @n: Tne value of the new node
 *  Return: The address of the new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *tmp2;
	dlistint_t *new;

	if (*h == NULL)
		return (NULL);
	tmp = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	while (idx != 1)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
		idx--;
	}
	tmp2 = tmp->next;
	tmp->next = new;
	tmp2->prev = new;
	new->prev = tmp;
	new->next = tmp2;

return (new);
}
