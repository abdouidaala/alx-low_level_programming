#include "lists.h"

void free_list(list_t *head)
{
	list_t *ptr = malloc(sizeof(list_t));

	head = ptr;
	if (ptr == NULL)
		free(ptr);
}
