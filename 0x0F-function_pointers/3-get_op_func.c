#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform the operation
 *               asked by the user.
 * @s: The operator passed as argument (e.g., "+", "-", "*", "/", "%").
 *
 * Return: A pointer to the function that corresponds to the operator given
 *         as a parameter. If the operator does not match any of the expected
 *         operators, prints "Error" and exits with status 99.
 *
 * Description: This function iterates through an array of operator-function
 *              pairs, compares the input operator string to each supported
 *              operator, and returns the corresponding function pointer.
 *              If no match is found, it handles the error by printing a
 *              message and terminating the program.
 */
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
