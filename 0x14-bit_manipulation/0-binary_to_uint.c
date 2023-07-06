#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number on success, 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i, dec = 1;

	if (!b)
		return (0);
	i = 0;
	while (b[i])
		i++;
	i -= 1;
	for (; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '0')
				n += 0;
			if (b[i] == '1')
				n += dec;
			dec *= 2;
		}
		else
			return (0);
	}
	return (n);
}
