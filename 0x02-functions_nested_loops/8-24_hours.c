#include "main.h"

/**
 * @brief jack_bauer - Print every minute of the day from 0:00 to 23:59
 *
 * @return void
 */
void jack_bauer(void)
{
	char i, j, k, l;

	for (i = '0'; i <= '2'; i++)
		for (j = '0'; j <= '9'; j++)
			for (k = '0'; k <= '5'; k++)
				for (l = '0'; l <= '9'; l++)
				{
					if (i == '2' && j > '3')
						continue;
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
}