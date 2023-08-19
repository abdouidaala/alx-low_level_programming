#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node of dlistint_t
 * @head: pointer to the head of dlistint_t
 * @index: index of the node
 * Return: address of the node, NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	__u_int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
