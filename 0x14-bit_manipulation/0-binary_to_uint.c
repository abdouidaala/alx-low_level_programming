#include "main.h"
#include <string.h>

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, dec = 1;
	int len, i;

	if (!b)
		return (0);
	len = strlen(b) - 1;
	i = len;
	while (i >= 0)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '1')
				sum += dec;

			dec *= 2;
		}
		else
			return (0);
		i--;
	}

	return (sum);
}
