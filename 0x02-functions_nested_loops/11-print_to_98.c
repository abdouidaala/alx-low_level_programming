#include <stdio.h>

/**
 * * print_times_table - Print the n times table
 *
 * @n: number times table table (0 < n<= 15)
 *
 * Return: no return
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i > 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
