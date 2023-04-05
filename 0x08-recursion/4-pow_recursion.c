#include "main.h"
#include <math.h>

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	int z = pow(x, y);

	return (z);
}
