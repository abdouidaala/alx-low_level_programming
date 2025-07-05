#include "main.h"

/**
 * _helper - Recursively checks if a number is prime.
 *
 * @n: The number to check for primality.
 * @m: The current divisor being tested.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int _helper(int n, int m)
{
	if (m < n && n % m == 0)
		return (0);

	if (m == n)
		return (1);

	return (_helper(n, m + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number.
 *
 * @n: The integer to check for primality.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_helper(n, 2));
}
