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

	if (*head)
	{
		if (index == 0)
		{
			free(*head);
			*head = NULL;
			return (1);
		}
	}
	return (-1);
}
