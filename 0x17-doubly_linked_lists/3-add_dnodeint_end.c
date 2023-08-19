#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of the dlistint_t
 * @head: double pointer to the dlistint_t
 * @n: data to of the node
 * Return: the address of the new element, NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}
	else
		*head = new;

	return (*head);
}
