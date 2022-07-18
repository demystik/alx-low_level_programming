#include "lists.h"

/**
 * free_listint - This function frees listint
 * @head: The head node
 *
 * Return: nothing to return
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node);
	}

}
