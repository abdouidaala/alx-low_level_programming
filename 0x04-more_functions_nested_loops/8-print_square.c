#include "main.h"

/**
 * @brief print_square - Print a square
 *
 * @param size the size of the square
 *
 * @return void
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			putchar('#');

		putchar('\n');
	}
}
