#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	unsigned int i = 0;

	ptr = malloc(sizeof(listint_t));

	while (*head)
	{
		if (i == idx)
		{
			*head = ptr;
			ptr->n = n;
			ptr->next = *head;
		}
		*head = (*head)->next;
		i++;
	}
	return (ptr);
}
