#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Print minimum number of coins to make change for an amount of money.
 *
 * @argc: Number of command line arguments
 * @argv: Array name
 *
 * Return: 0 on SUCCESS, 1 if invalid number of arguments
 */
int main(int argc, char *argv[])
{
	int cents = 0;
	int coins[5] = {25, 10, 5, 2, 1};
	int i = 0;
	int nCoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
		printf("0\n");

	do {
		if (cents - coins[i] < 0)
			i++;
		else
		{
			cents = cents - coins[i];
			nCoins++;
		}
	} while (cents > 0);

	printf("%d\n", nCoins);

	return (0);
}
