#include "main.h"

/**
 * print_triangle - Draw a diagonal line on the terminal
 *
 * @size: is the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
			_putchar(' ');
		for (k = size - i - 1; k < size; k++)
			_putchar('#');

		_putchar('\n');
	}
}
