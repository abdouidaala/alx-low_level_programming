#include <unistd.h>
#ifndef HEADER_FILE
#define HEADER_FILE

/**
  * _putchar - writes the character c to stdout
  * @c: The character to print
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
  */
int _putchar(char a)
{
	return (write(1, &a, 1));
}

#endif
