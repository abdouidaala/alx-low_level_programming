#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	p = malloc(sizeof(int *) * height);

	if (p == NULL || width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
