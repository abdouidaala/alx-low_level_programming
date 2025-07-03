#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	fibonacci_even_sum();

	return (0);
}

/**
 * fibonacci_even_sum - print sum of even-valued terms in Fib-seq < 4000000
 *
 * Return: void
 */
void fibonacci_even_sum(void)
{
	size_t n1 = 0, n2 = 1, max = 0, result = 0;

	while (1)
	{
		max = n1 + n2;

		if (max >= 4000000)
			break;

		if ((max % 2) == 0)
			result += max;

		n1 = n2;
		n2 = max;
	}
	printf("%lu\n", result);
}
