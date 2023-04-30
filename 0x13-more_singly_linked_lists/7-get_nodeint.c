#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr, *tmp;
	unsigned int count = 0;

	ptr = head;
	while (ptr && count <= index)
	{
		tmp = ptr;
		ptr = ptr->next;
		count++;
	}
	return (tmp);
}
