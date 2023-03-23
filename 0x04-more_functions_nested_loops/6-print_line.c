#include "main.h"

/**
 * print_line - Draws a straight line on the terminal
 *
 * @n: Number of time sthe character '_' should printed
 *
 * Return: empty
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
