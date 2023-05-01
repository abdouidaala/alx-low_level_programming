#include "lists.h"

/**
 * insert_nodeint_at_index - inserting a new node at agiven postion
 * @head: double pointer
 * @idx: index of the node
 * @n: new node value
 *
 * Return: the address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	if (!new)
		return (NULL);

	ptr = *head;

	while (ptr)
	{
		if (i == (idx - 1))
		{
			new->next = ptr->next;
			ptr->next = new;
		}
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
