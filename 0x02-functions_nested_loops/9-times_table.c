#include "main.h"

/**
 * times_table - Prints the nine times table starting from 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			_putchar(i * j);
			if (j < '9')
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
