#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	int data = 0;

	if (*head == NULL)
		return (0);
	if ((*head)->next == NULL)
		data = (*head)->n;
	free(*head);
	*head = NULL;
	return (data);
}
