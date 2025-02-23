#include "main.h"

/**
 * @brief print_line - Draw a straight line in the terminal
 *
 * @param n Number of times the character '_' should printed
 *
 * @return void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}
