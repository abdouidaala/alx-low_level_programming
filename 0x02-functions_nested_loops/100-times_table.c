#include "main.h"

/**
 * times_table - Prints the nine times table starting from 0
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, a;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			a = (i * j);
			if (a >= n)
			{
				_putchar(' ');
				_putchar('0' + (a / 10));
			}
			if (a <= n && j > 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			_putchar('0' + (a % 10));
			if (j < n)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
