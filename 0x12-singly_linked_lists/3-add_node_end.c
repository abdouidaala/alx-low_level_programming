#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int length;
	list_t *ptr, *tmp;

	length = strlen(str);
	tmp = malloc(sizeof(list_t));

	if (!tmp)
		return (NULL);

	tmp->str = strdup(str);
	tmp->len = length;
	tmp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}

	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = tmp;

	return (tmp);
}
