#include "lists.h"
/**
 * add_dnodeint_end - This function add a new node at the ende
 * of a dlistint_t list
 * Author - Thaoban Abdrasheed
 * @head: The head pointer
 * @n: The value of the node
 * Return: address of the new element or Null if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *new;


	tmp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	if (tmp == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		new->n = n;
		tmp->next = new;
		new->prev = tmp;
		new->next = NULL;
	}
return (new);
}
