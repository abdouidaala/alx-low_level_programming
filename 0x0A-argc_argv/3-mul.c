#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Error");
		return (1);
	}
	else
	{
		int mul, num1, num2;

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;

		printf("%d\n", mul);
	}
	return (0);
}
