#include "lists.h"

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
