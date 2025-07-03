#include "main.h"

/**
 * main - check the code
 *
 * Return:Always 0.
 */
int main(void)
{
	sum_natural_nums(5, 3, 1024);

	return (0);
}

/**
 * sum_natural_nums - Print sum of all the multiples of num1 or num2 <= max.
 *
 * @num1: First multiple
 * @num2: Second multiple
 * @n_max: Upper limit (excluded)
 */
void sum_natural_nums(int num1, int num2, int n_max)
{
	int sum = 0;
	int max = n_max - 1;

	while (max > 0)
	{
		if (!(max % num1) || !(max % num2))
			sum += max;
		max--;
	}

	printf("%d\n", sum);
}
