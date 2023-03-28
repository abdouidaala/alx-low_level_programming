#include "main.h"
#include <string.h>

void rev_string(char *s)
{
	int i, len;

	len = strlen(s);
	i = len - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
