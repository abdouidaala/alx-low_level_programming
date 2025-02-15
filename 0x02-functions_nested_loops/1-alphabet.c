#include "main.h"

/**
 * @brief print_alphabet - Entry point
 *
 * @note You can only use _putchar twice in your code
 *
 * @return alphabets a to z
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
}
