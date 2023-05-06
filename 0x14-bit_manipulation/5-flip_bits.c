#include "main.h"

/**
 * flip_bits - flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	int i = 0;

	result = n ^ m;

	while (result)
	{
		if (result & 1)
			i++;
		result >>= 1;
	}
	return (i);
}
