#include "main.h"

/**
 * times_table - Prints the nine times table starting from 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			_putchar(i * j);
			if (j < 57)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
