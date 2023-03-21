#include "main.h"

/**
  * print-alphabet - Entry point
  *
  * Return: alphabets a to z (10 times)
  */
void print_alphabet_x10(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
}

int main(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		print_alphabet_x10();
		_putchar('\n');
	}
	return (0);
}
