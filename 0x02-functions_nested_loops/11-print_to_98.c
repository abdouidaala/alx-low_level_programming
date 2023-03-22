#include <stdio.h>

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (n < 98)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
