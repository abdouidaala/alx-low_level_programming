#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	int count = 0;

	if (h->str == NULL)
		printf("[0] (nil)\n");
	printf("[%d] %s\n", h->len, h->str);
	printf("[%d] %s\n", (h->next)->len, (h->next)->str);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
