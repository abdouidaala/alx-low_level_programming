#include "main.h"
#include <stdbool.h>

bool is_prime(int n);

/**
 * @brief main - print the largest prime factor of the number 612852475143.
 *
 * @return Always 0.
 */
int main(void)
{
	long int n = 612852475143;
	int i = 2;

	while (n > 1)
	{
		if (!(n % i) && is_prime(i))
		{
			printf("%i ", i);
			n /= i;
		}
		else
			i++;
	}
	putchar('\n');

	return (0);
}

/**
 * @brief is_prime - Checks if a given integer is a prime number.
 *
 * @param n The integer to check.
 *
 * @return true if n is a prime number, false otherwise.
 */
bool is_prime(int n)
{
	int i = 2;

	for (; i <= n / 2; i++)
		if (!(n % i))
			return false;
	return true;
}
