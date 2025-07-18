#include "lists.h"
#include <stdbool.h>

/**
 * print - a helper function to print a null-terminated linked list.
 *
 * @head: a pointer to the first node
 *
 * Return: void
 */
void print(const listint_t *head)
{
	const listint_t *ptr = head;

	while (ptr)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		ptr = ptr->next;
	}
}

/**
 * print_listint_safe - print a listint_t linked list.
 *
 * @head: a pointer to the first node
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t size = 0, i;
	bool isLoop = 0;

	do {
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
		print(slow);
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
