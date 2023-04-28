#include "lists.h"

/**
 * add_node_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */
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
