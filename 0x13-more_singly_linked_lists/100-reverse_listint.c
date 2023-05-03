#include "lists.h"

/**
 * reverse_listint - the function that reverses a listint_t
 * @head: double pointer
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *p;

	ptr = *head;
	while (ptr)
	{
		ptr = ptr->next;
		if (ptr->next == NULL)
		{
			p = ptr;
			p->next = *head;
		}
	}
	return (p);
}
