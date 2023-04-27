#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	unsigned int length;
	list_t *ptr = malloc(sizeof(list_t));

	length = strlen(str);

	if (!ptr)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = length;
	ptr->next = *head;

	*head = ptr;

	return (ptr);
}
