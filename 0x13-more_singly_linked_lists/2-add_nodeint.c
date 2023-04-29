#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->next = *head;
	ptr->n = n;
	*head = ptr;

	return (ptr);
}
