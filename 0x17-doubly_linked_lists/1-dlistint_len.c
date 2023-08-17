#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t
 * @h: a pointer to the head of the dlistint_t
 * Return: number of elements of the dlistint_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
