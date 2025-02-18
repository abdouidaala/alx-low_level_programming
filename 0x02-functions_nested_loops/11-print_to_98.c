#include "main.h"

/**
 * @brief print_to_98 - Prints numbers from n to 98.
 * 					Example: n, n(+/-)1, ..., 98
 *
 * @param n Theinput number.
 *
 * @return no return.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	else
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}

	putchar('\n');
}
