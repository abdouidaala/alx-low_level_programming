#include "main.h"

void times_table(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (j < 57)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
	}
	return (i * j);
}
