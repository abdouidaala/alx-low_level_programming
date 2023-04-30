#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data = 0;

	if (!(*head) || !head)
		return (0);

	ptr = *head;
	data = ptr->n;
	*head = (*head)->next;
	free(ptr);

	return (data);
}
