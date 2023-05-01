#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: sum all the data
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		ptr = head;
		sum += ptr->n;
		head = head->next;
	}
	return (sum);
}
