#include "lists.h"

/**
 * sum_dlistint - This function sums all the data (n)
 * of a dlistint_t linked list
 * @head: Pointer to the head node
 * Author - Thaoban Abdrasheed
 * Return: the sum of all data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *tmp;

	if (head == NULL)
		return (0);

	sum = 0;
	tmp = head;
	while (tmp->prev != NULL)
		tmp = tmp->prev;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
