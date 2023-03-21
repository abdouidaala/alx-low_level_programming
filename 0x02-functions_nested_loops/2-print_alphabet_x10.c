#include "main.h"

/**
  * print-alphabet - Entry point
  *
  * Return: alphabets a to z (10 times)
  */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
		i = 1;
		while (i <= 10)
		{
			_putchar('\n');
			i++;
		}
	}
}
