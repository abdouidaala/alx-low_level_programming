#include "lists.h"

/**
 * free_dlistint - free a dlistint_t
 * @head: pointer to dlistint_t
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		while (head->next)
		{
			free(head);
			head = head->next;
		}
		free(head);
		head = NULL;
	}
}
