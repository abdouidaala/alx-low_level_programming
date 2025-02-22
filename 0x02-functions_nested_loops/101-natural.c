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
void sum_natural_nums(int num1, int num2, int max)
{
	int n_times = 1;
	int sum = 0;

	while (num1 * n_times < max || num2 * n_times < max)
	{
		if (num1 * n_times < max)
			sum += num1 * n_times;
		if (num2 * n_times < max)
			sum += num2 * n_times;
		if (num1 * n_times == num2 * n_times)
			sum -= num1 * n_times;
		n_times++;
	}

	printf("%d\n", sum);
}
