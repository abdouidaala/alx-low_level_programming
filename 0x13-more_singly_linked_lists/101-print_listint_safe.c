#include "lists.h"
#include <stdbool.h>

/**
 * print_listint_safe - print a listint_t linked list.
 *
 * @head: a pointer to the first node
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t size = 0;
	bool isLoop = 0;
	size_t i;

	do
	{
		slow = slow->next;
		fast = fast->next->next;
		size++;
		if (slow == fast)
		{
			isLoop = 1;
			break;
		}
	} while (fast && fast->next);
	slow = head;
	if (!isLoop)
		while (slow)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
		}
	else
	{
		while (slow != fast)
		{
			size++;
			slow = slow->next;
			fast = fast->next;
		}
		slow = head;
		i = 0;
		while (i < size)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			i++;
		}
		printf("-> [%p] %d\n", (void *)fast, fast->n);
	}

	return (size);
}
