#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: a double pointer of lists
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	ptr = *head;
	while (*head)
	{
		*head = ptr;
		free(*head);
		ptr = ptr->next;
	}
}
