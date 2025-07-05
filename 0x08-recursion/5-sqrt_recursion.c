#include "main.h"

/**
 * _sqrt_helper - find the natural square root of n.
 *
 * @n: integer
 * @m: starting from 0 (recursively incrementing by +1)
 *
 * Return: the natural square root if m on SUCCESS.
 *         -1 if on FAILURE,
 *         otherwise, the function calls itself again with m + 1
 */
int _sqrt_helper(int n, int m)
{
	if (m * m == n)
		return (m);

	if (m * m > n)
		return (-1);

	return (_sqrt_helper(n, m + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: integer
 *
 * Return: the natural square root n, otherwise, -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0));
}
