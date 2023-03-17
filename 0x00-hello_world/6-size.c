#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d\n", sizeof(char), "byte(s)");
	printf("Size of an int: %d\n", sizeof(int), "byte(s)");
	printf("Size of a long int: %d\n", sizeof(long int), "byte(s)");
	printf("Size of a long long int: %d\n", sizeof(long long int), "byte(s)");
	printf("Size of a float: %d\n", sizeof(float), "byte(s)");
	return (0);
}
