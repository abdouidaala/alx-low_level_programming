#include "main.h"
#include <math.h>

int _sqrt_recursion(int n)
{
	int result = sqrt(n);
	int a = result * result;

	if ((n == 1) || (a == n) || (n % 2 == 0))
		return (result);

	return (-1);
}
