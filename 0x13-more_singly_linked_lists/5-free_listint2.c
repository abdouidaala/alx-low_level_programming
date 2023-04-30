#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *ptr, *tmp;

	ptr = *head;

	while (ptr)
	{
		tmp = ptr;
		ptr = ptr->next;
		free(tmp);
	}
}
