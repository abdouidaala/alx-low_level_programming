#include "lists.h"

/**
 * print_dlistint - print all the elements of dlistint_t
 * @h: a pointer to the head of the dlistint_t
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}

/**
 * _print_dlistint_backward - print all the elements of dlistint_t in reverse
 * @h: a pointer to the head of the dlistint_t
 * Return: the number of nodes
 */
size_t _print_dlistint_backward(dlistint_t *h)
{
	size_t len = 0;
	dlistint_t *ptr1, *ptr2;

	ptr1 = h;
	ptr2 = ptr1->next;
	ptr1->next = NULL;
	ptr1->prev = ptr2;

	while (ptr2)
	{
		ptr2->prev = ptr2->next;
		ptr2->next = ptr1;
		ptr1 = ptr2;
		ptr2 = ptr2->prev;
	}
	h = ptr1;
	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}

	return (len);
}