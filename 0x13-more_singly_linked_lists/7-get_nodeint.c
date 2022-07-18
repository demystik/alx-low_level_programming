#include "lists.h"

/**
 * get_node_at_index - This function return the nth node of a listint_t
 * @head: The head of the node
 * @index: The index of the node to return
 * Return: The node at that index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	listint_t *tmp;

	tmp = head;

	for(i = 0; i != index; i++)
	{
		tmp = tmp->next;
	}
return (tmp);
}
