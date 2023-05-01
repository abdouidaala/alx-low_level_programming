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
	listint_t *ptr;
	unsigned int i = 0;

	ptr = malloc(sizeof(listint_t));

	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	while (*head)
	{
		if (i == idx)
		{
			return (ptr);
		}
		*head = (*head)->next;
		i++;
	}
	return (0);
}
