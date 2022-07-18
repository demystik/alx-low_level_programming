#include "lists.h"

/**
 * sum_listint - This function returns the sum of all data(n) of linked list
 * @head: The head node
 *
 * Return: the sum of all data(n) of a linkedlist
 */

int sum_listint(listint_t *head)
{

	int sum;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
return (sum);
}
