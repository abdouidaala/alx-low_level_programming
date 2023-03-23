#include "main.h"

/**
 * print_diagonal - Draws a diagonal line according to parameter
 *
 * @n: The of time to print diagonal lines
 *
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
