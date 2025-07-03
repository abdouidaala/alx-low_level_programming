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
 * fibonacci - print the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: void
 */
void fibonacci(void)
{
	size_t n1 = 1, n2 = 2, n3 = 0, temp;

	printf("%li, %li, ", n1, n2);

	for (int i = 0; i < 98; i++)
	{
		n3 = n2 + n1;
		if (i)
			printf(", ");
		printf("%li", n3);
		temp = n3;
		n1 = n2;
		n2 = temp;
	}
	putchar('\n');
}
