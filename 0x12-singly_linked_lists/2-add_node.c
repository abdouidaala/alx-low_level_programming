#include "lists.h"

/**
 * add_node - add a new node at beginning of a list_t list.
 * @head: head of a list_t list.
 * @str: value to insert into element.
 * Return: the number of nodes.
 */
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
