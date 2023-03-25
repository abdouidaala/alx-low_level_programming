#include <stdio.h>

int main(void)
{
	int a, b, c;
	int i;

	a = 0;
	b = 1;
	for (i = 0; i < 50; i++)
	{
		c = a + b;
		a = b;
		b = c;

		printf("%d", c);
		if (i < 49)
		{
			putchar(44);
			putchar(32);
		}
	}
	printf("\n");

	return (0);
}
