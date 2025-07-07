#include "main.h"
#include <stdio.h>

/**
 * str_to_int - Converts a numeric string to a long long integer.
 * @str: Pointer to the null-terminated string containing digits.
 *
 * This function parses the input string, assuming it contains only
 * numeric characters ('0'-'9'), and computes its integer value.
 * It does not handle negative numbers, non-digit characters,
 * or overflow conditions.
 *
 * Return: The converted long long integer value of the string.
 */
long long int str_to_int(const char *str)
{
	long long int i = 0, l, j = 1, n = 0;

	while (str[i])
		i++;

	for (l = i - 1; l >= 0; l--)
	{
		n += (str[l] - '0') * j;
		j *= 10;
	}

	return (n);
}

/**
 * main - check the code for
 *
 * @ac: Argument count.
 * @av: Array of strings containing the arguments.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	long long int n1, n2;

	if (ac != 3)
	{
		printf("Error\n");
		return (98);
	}

	n1 = str_to_int(av[1]);
	n2 = str_to_int(av[2]);
	printf("%lld\n", n1 * n2);

	return (0);
}
