#include "lists.h"

/**
 * find_listint_loop - find the loop in a linked list
 *
 * @head: a pointer to the linked list
 *
 * Return: address of the node where the loop starts
 *         otherwise, NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	do {
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			break;
	} while (fast && fast->next);
	if (slow != fast)
		return (NULL);
	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}

	return (fast);
}
