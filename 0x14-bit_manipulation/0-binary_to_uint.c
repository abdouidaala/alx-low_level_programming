#include "main.h"
#include <string.h>

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, dec = 1;
	int len = strlen(b);
	int i = len - 1;

	if (!b)
		return (0);

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
