#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	while (head->next)
	{
		free(head);
		head = head->next;
	}
	free(head);
	head = NULL;
}