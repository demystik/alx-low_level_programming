#include "lists.h"

/**
 * sum_listint - This function returns the sum of all data(n) of linked list
 * @head: The head node
 *
 * Return: the sum of all data(n) of a linkedlist
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum;


	if (head == NULL)
		return (0);
	else
	{
		tmp = head;

		while (tmp != NULL)
		{
			sum += tmp->n;
			tmp = tmp->next;
		}
	}
return (sum);
}
