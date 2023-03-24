#include <stdio.h>

/**
 * main - Prints a Fizz Buzz program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, f, b;

	for (i = 1; i <= 100; i++)
	{
		f = i % 3;
		b = i % 5;
		if (f == 0 && b == 0)
		{
			printf("FizzBuzz");
		}
		else if (f == 0)
		{
			printf("Fizz");
		}
		else if (b == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
