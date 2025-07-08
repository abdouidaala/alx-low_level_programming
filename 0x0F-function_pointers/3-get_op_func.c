#include "3-calc.h"

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i = 0;

	while (i < 5)
	{
		if (s[0] != ops[i++].op[0])
			continue;
		return (ops[i - 1].f);
	}

	puts("Error");
	exit(99);
}
