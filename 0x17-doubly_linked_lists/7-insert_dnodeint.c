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
	dlistint_t *temp1;
	__u_int i = 0;
	size_t len = 0;

	if (!new)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	while (temp)
	{
		len++;
		temp = temp->next;
	}
	if (idx == 0 || !ptr)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
	}
	else if (idx >= 1 && idx < len)
	{
		while (ptr)
		{
			if (i == idx)
			{
				temp1 = ptr;
				new->prev = temp1->prev;
				new->next = temp1;
				(temp1->prev)->next = new;
				temp1->prev = new;
			}
			i++;
			ptr = ptr->next;
		}
	}
	else if (idx == len)
	{
		temp = *h;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}
	else
		return (NULL);
	return (*h);
}
