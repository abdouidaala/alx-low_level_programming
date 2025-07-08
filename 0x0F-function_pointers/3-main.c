#include "3-calc.h"

int main(int ac, char *av[])
{
	int a, b;
	int (*r)(int, int);
	int result;

	if (ac != 4)
	{
		puts("Error\n");
		return (98);
	}

	a = atoi(av[1]);
	b = atoi(av[3]);

	r = get_op_func(av[2]);
	result = r(a, b);

	printf("Result: %d\n", result);

	return (0);
}
