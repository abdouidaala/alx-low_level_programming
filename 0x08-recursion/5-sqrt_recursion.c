#include "main.h"

int _sqrt_recursion(int n)
{
	static int i = 0;
	static int num = 0;

	if (!i)
		num = n;

	if (n * n == num)
		return n;
	if (n < 0)
		return -1;
	i++;

	return _sqrt_recursion(n - 2);
}
