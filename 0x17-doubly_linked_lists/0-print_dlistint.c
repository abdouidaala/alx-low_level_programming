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
