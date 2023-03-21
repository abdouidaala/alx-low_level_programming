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
		for (i = 1; i <= 10; i++)
		{
			_putchar('\n');
		}
	}
}
