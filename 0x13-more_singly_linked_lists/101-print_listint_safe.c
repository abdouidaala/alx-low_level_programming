#include "lists.h"

/**
 * print_listint_safe - print a listint_t linked list.
 *
 * @head: a pointer to the first node
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr = head;
	size_t size = 0;

	while (ptr)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		if (!ptr->n && ptr->next)
		{
			printf("-> [%p] %d\n", (void *)ptr->next, ptr->next->n);
			break;
		}
		ptr = ptr->next;
		size++;
	}
	return (size);
}
