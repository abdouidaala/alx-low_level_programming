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

	ptr = *head;
	if (ptr->next == NULL)
		data = ptr->n;
	while (ptr)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
	}
	free(ptr);
	*head = NULL;
	return (data);
}
