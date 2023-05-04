#include "lists.h"

/**
 * reverse_listint - the function that reverses a listint_t
 * @head: double pointer
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL, *tmp = NULL;

	while (*head)
	{
		ptr = (*head)->next;
		(*head)->next = tmp;
		tmp = (*head);
		(*head) = ptr;
	}
	(*head) = tmp;
	free(ptr);
	return (*head);
}
