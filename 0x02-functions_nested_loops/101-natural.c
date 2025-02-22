#include "main.h"

/**
 * @brief main - check the code
 *
 * @return Always 0.
 */
int main(void)
{
	sum_natural_nums(5, 3, 1024);

	return (0);
}

/**
 * @brief sum_natural_nums - Print the sum of all the multiples of num1 or num2 below max (excluded).
 *
 * @param num1
 * @param num2
 * @param max
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
