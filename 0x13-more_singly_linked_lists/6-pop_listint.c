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

	if (!(*head))
		return (0);

	data = (*head)->n;
	free(*head);
	*head = NULL;

	return (data);
}
