#include "lists.h"

void free_list(list_t *head)
{
	list_t *ptr = malloc(sizeof(list_t));

	ptr = head;
	if (ptr == NULL)
		free(ptr);
}
