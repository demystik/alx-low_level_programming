#include "lists.h"

/**
 * pop_listint - This function delete a node at
 * the beginning of linked list
 * @head: The head pointer
 *
 * Return: The haed node's data
 */

int pop_listint(listint_t **head)
{
	int data;

	listint_t *tmp;
	listint_t *move;

	if (*head == NULL)
		return (0);

	tmp = *head;

	data = tmp->n;

	move = tmp->next;

	free(tmp);

	*head = move;

	return (data);
}

