#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: checking bits
 * @index: which to check bit
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > 64)
		return (-1);
	mask = 1 << index;

	if (mask & n)
		return (1);
	else
		return (0);
}
