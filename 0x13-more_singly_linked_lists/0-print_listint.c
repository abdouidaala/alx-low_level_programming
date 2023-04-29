#include "lists.h"

size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr = NULL;

	for (ptr = h; ptr != NULL; ptr = ptr->next)
	{
		printf("%d\n", ptr->n);
		count++;
	}
	return (count);
}
