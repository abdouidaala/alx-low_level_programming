#include <stdio.h>

/**
 * main - Prints the name of the file of the program
 *        was compiled from, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *ptr = __FILE__;
	int i = 0;

	while (ptr[i])
	{
		putchar(ptr[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
