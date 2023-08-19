#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		head = head->next;
		free(head->prev);
	}
	head = NULL;
}