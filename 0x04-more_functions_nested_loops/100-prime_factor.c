#include "main.h"
#include <stdbool.h>

bool is_prime(int n);

/**
 * main - print the largest prime factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n = 612852475143;
	long int i = 2;

	while (n > 1)
	{
		if (!(n % i) && is_prime(i))
			n /= i;
		else
			i++;
	}
	printf("%li\n", i);

	return (0);
}

/**
 * is_prime - Checks if a given integer is a prime number.
 *
 * @n: The integer to check.
 *
 * Return: true if n is a prime number, false otherwise.
 */
bool is_prime(int n)
{
	int i = 2;

	for (; i <= n / 2; i++)
		if (!(n % i))
			return (false);
	return (true);
}
