#include <stdio.h>

int main(void)
{
	int a, b, c;
	int i;

	a = 0;
	b = 1;
	for (i = 0; i < n; i++)
	{
		c = a + b;
		a = b;
		b = c;

		printf("%d", c);
		if (i < (n - 1))
		{
			putchar(44);
			putchar(32);
		}
	}
	printf("\n");

	return (0);
}
