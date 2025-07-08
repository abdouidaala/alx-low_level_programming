#include "3-calc.h"

/**
 * op_add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b) { return (a + b); }

/**
 * op_sub - Subtracts the second integer from the first.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of a - b.
 */
int op_sub(int a, int b) { return (a - b); }

/**
 * op_mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b) { return (a * b); }

/**
 * op_div - Divides two integers.
 * @a: The numerator.
 * @b: The denominator.
 *
 * Return: The result of dividing @a by @b.
 *         If b is zero, prints "Error" and exits with status 100.
 */
int op_div(int a, int b)
{
	if (!b)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Computes the remainder of the division of two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The remainder of a divided by b.
 *         If b is zero, prints "Error" and exits with status 100.
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
