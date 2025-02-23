#include "main.h"

/**
 * @brief print_diagonal - Draw a diagonal line on the terminal
 *
 * @param n Number of times the character '\' should printed
 *
 * @return void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
