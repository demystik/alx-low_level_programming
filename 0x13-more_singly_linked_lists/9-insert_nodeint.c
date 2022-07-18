#include "lists.h"

/**
 * insert_nodeint_at_index - This function inserts a new node at given position
 * @head: The head node
 * @idx: The index of the list where new node is to be added
 * @n: The integer data of the new node
 * Return: The address of the new inserted node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new_node;
	unsigned int i;

	tmp = *head;

	if (tmp == NULL && idx != 0)
		return (NULL);

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	for (i = 0; i < idx; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
return (new_node);
}
