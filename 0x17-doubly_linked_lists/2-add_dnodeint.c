#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the 
 * beginning of a dlistint_t list
 * Author - Thaoban Abdrasheed
 * @head: Points to the head pointer
 * @n: New node value
 * Return address to the new node
 */ 

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *h;

	h = *head;
	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->prev = NULL;
	tmp->n = n;
	tmp->next = NULL;
	if (h == NULL)
	{
		*head = tmp;
		return (*head);
	}
	else
	{
		tmp->next = h;
		h->prev = tmp;
		*head = tmp;
		h = tmp;
	}
return (*head);
}
