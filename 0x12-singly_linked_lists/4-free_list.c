#include "lists.h"

/**
 * free_list - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */
void free_list(list_t *head)
{
	list_t *ptr = malloc(sizeof(list_t));

	ptr = head;
	if (!ptr)
		free(ptr);
	free(head);
}
