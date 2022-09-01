#include "lists.h"

/**
 * free_dlistint - This function frees a dlistint_t list
 * Author - Thaoban Abdrasheed
 * @head: The pointer to the head
 * Return: nothing to return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}

}
