#include "main.h"

/**
 * times_table - Prints the nine times table starting from 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, a;

	for (i = '0'; i <= '9'; i++)
	{
		a = (i * j) % 10 + '0';
		for (j = '0'; j <= '9'; j++)
		{
			_putchar(a);
			if (j < '9')
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
