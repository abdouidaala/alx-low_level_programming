#include "lists.h"

size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr = NULL;

	if (h == NULL)
		return (0);
	for (ptr = h; ptr != NULL; ptr = ptr->next)
		count++;
	return (count);
}
