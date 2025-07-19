#include "lists.h"
#include <stdbool.h>

size_t free_helper(listint_t **h)
{
	listint_t *ptr = *h;
	size_t size = 0;

	while (*h)
	{
		ptr = (*h)->next;
		free(*h);
		*h = ptr;
		size++;
	}

	return (size);
}

/**
 * free_listint_safe - free a linked list with a loop
 *
 * @h: a double pointer to a linked list
 *
 * Return: the size of the linked list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr = *h, *slow = *h, *fast = *h;
	size_t size = 0, i;
	bool isLoop = 0;

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
	if (!isLoop)
		size = free_helper(h);
	else
	{
		slow = *h;
		while (slow != fast)
		{
			size++;
			slow = slow->next;
			fast = fast->next;
		}
		ptr = *h;
		i = 0;
		while (i < size)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			i++;
		}
		*h = NULL;
	}
	return (size);
}
