#include "main.h"
#include <stdio.h>

void free_grid(int **grid, int height)
{
	int **p = malloc(sizeof(int *) * height);

	free(p);
}
