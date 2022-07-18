#include "lists.h"

/**
 * reverse_listint - This function reverses a listint_t linked list
 * @head: The head node
 *
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *nextt = NULL;
	listint_t *curr = *head;


	while(curr != NULL)
	{
		nextt = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nextt;
	}
	curr = prev;
	return (curr);
}
