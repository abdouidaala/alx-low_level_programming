#include "main.h"

/**
 * @brief main - check the code.
 *
 * @return Always 0.
 */
int main(void)
{
	fibonacci();

	return (0);
}

/**
 * @brief fibonacci - print the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * @return void
 */
void fibonacci(void)
{
	int i;
	size_t n1 = 1;
	size_t n2 = 2;
	size_t result = 0;

	printf("%lu, %lu", n1, n2);

	for (i = 2; i < 50; i++)
	{
		result = n1 + n2;

		printf(", %lu", result);

		n1 = n2;
		n2 = result;
	}

	putchar('\n');
}
