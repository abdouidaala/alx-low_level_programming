#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index (index) of a dlistint_t
 * @head: double pointer to the head of dlistint_t
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head, *temp, *curr;
	__u_int i = 1;

	if (!ptr)
		return (-1);
	if (ptr)
	{
		if (index == 0)
		{
			ptr = ptr->next;
			free(ptr->prev);
			ptr->prev = NULL;
			return (1);
		}
		else
		{
			while (ptr)
			{
				if (i++ == index)
				{
					curr = ptr->next;
					temp = ptr->next->next;
					free(curr);
					curr = NULL;
					ptr->next = temp;
					temp->prev = ptr;
					return (1);
				}
				ptr = ptr->next;
			}
		}
	}
	if (index > i)
		return (-1);
	return (1);
}
