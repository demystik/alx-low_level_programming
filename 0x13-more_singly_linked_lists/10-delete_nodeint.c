#include "lists.h"

/**
 * delete_nodeint_at_index - This function deletes the node at a given index
 * @head: The head of the node
 * @index: Is the index of the node that should be deleted
 * Retun: 1 if if succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *curr;
	unsigned int i;

	prev = *head;
	curr = *head;
	
	if(*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = curr->next;
		free(curr);
		curr = NULL;
	}
	else
	{
		while(index != 0)
		{
			prev = curr;
			curr = curr->next;
			index--;
		}
		prev->next = curr->next;
		free(curr);
		curr = NULL;
	}

return (1);
}
