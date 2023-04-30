#include "lists.h"

void free_listint(listint_t *head)
{
	if (head->next == NULL)
	{
		free(head->n);
		free(head);
	}
}
