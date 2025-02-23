#include "main.h"

/**
 * @brief main - check the code.
 *
 * @return Always 0.
 */
int main()
{
	fibonacci_even_sum();

	return 0;
}

/**
 * @brief fibonacci_even_sum - print the sum of the even-valued terms
 * 			in the Fibonacci sequence below 4,000,000
 *
 * @return void
 */
void fibonacci_even_sum(void)
{
	size_t n1 = 0;
	size_t n2 = 1;
	size_t max = 0;
	size_t result = 0;

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
