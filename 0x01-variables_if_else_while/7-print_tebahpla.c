#include <stdio.h>

/**
  * main - Entry point
  * prints the lowecase alphabet in reverse
  * use putchar function
  * Return: Always 0 (Success)
  */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
