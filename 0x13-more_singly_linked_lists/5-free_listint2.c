#include "lists.h"

/**
 * free_listint2 - This function like previous one also frees the listint_t list
 * @head: The head of the link
 *
 * Return: nothing to return
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *tmp;

	if (*head != NULL)
	{
		tmp = *head;

		while((node = tmp) != NULL)
		{
			tmp = tmp->next;
			free(node);
		}
		
		*head == NULL;
	}
}
