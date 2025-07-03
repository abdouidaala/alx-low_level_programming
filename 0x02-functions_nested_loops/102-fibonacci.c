#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	fibonacci();

	return (0);
}

/**
 * fibonacci - print the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: void
 */
void fibonacci(void)
{
	int i;
	size_t n1 = 1, n2 = 2, result = 0;

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
