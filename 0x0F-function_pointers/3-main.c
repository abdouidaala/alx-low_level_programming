#include "3-calc.h"

/**
 * main - Entry point for the calculator program.
 * @ac: Argument count.
 * @av: Argument vector (array of strings).
 *
 * Description:
 *   This program performs a calculation based on user input.
 *   It expects exactly 3 arguments: two integers and an operator.
 *   The operator is used to select the appropriate function via get_op_func.
 *   The result of the operation is printed to stdout.
 *
 * Return:
 *   0 on success,
 *   98 if the number of arguments is incorrect.
 */
int main(int ac, char *av[])
{
	int a, b;
	int (*r)(int, int);
	int result;

	if (ac != 4)
	{
		puts("Error");
		return (98);
	}

	a = atoi(av[1]);
	b = atoi(av[3]);

	r = get_op_func(av[2]);
	result = r(a, b);

	printf("%d\n", result);

	return (0);
}
