#include "main.h"

/**
 * times_table - Prints the nine times table starting from 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, a;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			a = (i * j);
			if (a >= 10)
			{
				_putchar(' ');
				_putchar('0' + (a / 10));
			}
			if (a <= 9 && j > 0)
			{
				_putchar(' ');
			}
			_putchar('0' + (a % 10));
			if (j < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
