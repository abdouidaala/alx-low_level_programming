#include "main.h"

/**
 * print_diagonal - Draws a diagonal line according to parameter
 *
 * @n: The of time to print diagonal lines
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(92);
		}
		_putchar('\n');
	}
}
