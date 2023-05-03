#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer
 * @index: index of node
 *
 * Return: pointer to the index node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head, *curr = *head;
	unsigned int i = 0;

	if (!(*head) || !head)
		return (-1);
	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		curr = NULL;
		return (1);
	}
	while (*head)
	{
		if (++i == index)
		{
			curr = prev->next;
			prev->next = curr->next;
			free(curr);
			curr = NULL;
			return (1);
		}
		else if (i-1 < index)
			return (-1);
		prev = prev->next;
	}
	return (-1);
}
