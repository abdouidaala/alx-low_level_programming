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

	while (*head)
	{
		if (i == idx)
		{
			ptr->n = n;
			ptr->next = NULL;
			return (ptr);
		}
		*head = (*head)->next;
		i++;
	}
	return (0);
}
