#include "lists.h"

/**
 * get_dnodeint_at_index - This function returns the nth node
 * of a dlistint_t linked list
 * Author - Thaoban Abdrasheed
 * @head: The pointer to the head
 * @index: The index to return a node from
 * Return: nth node of a dlistint_t
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;

	while (index != 0 && head != NULL)
	{
		head = head->next;
		index--;
	}
return (head);
}
