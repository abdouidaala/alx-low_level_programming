#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Sccess)
  */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		switch (ch)
		{
		case 'e':
			continue;
		case 'q':
			continue;
		default:
			putchar(ch);
		}
	}

	putchar('\n');
	return (0);
}
