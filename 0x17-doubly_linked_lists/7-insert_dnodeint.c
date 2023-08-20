#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: double pointer to the head of dlistint_t
 * @idx: the position of the new node
 * @n: the data (n) of the new node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *ptr = *h, *temp = *h;
	__u_int i = 1;

	if (!new || !ptr)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (*h);
	}
	while (ptr)
	{
		if (i++ == idx)
		{
			temp = ptr->next;
			new->prev = ptr;
			new->next = ptr->next;
			ptr->next = new;
			temp->prev = new;
		}
		ptr = ptr->next;
	}
	if (idx > i)
	{
		free(new);
		return (NULL);
	}
	return (*h);
}
