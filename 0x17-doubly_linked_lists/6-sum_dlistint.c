#include "lists.h"

/**
 * sum_dlistint - return the sum of all data (n) pf dlistint_t
 * @head: pointer to the head of dlistint_t
 * Return: sum of ns, 0 if the lsit is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
