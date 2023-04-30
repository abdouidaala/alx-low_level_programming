#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *ptr, *tmp;

	ptr = head;
	while (ptr != NULL)
	{
		tmp = ptr;
		ptr = ptr->next;
		free(tmp);
	}
}
