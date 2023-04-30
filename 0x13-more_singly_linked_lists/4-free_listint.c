#include "lists.h"

void free_listint(listint_t *head)
{
	if (head)
	{
		free(head);
	}
}
