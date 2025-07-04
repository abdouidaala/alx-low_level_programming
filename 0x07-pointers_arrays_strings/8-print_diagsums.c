#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the chessboard
 * @a: pointer to the first element of the matrix
 * @size: size of each array in the matrix
 */
void print_diagsums(int *a, int size)
{
	int n1 = 0, n2 = 0;
	int i = 0;

	for (; i < size * size; i += (size + 1))
		n1 += *(a + i);
	printf("%d, ", n1);

	i = size - 1;

	for (; i < size * size - 1; i += (size - 1))
		n2 += *(a + i);
	printf("%d\n", n2);
}
