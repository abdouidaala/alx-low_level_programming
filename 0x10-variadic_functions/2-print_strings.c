#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i >= 1)
			if (separator != NULL)
				printf("%s", separator);
		s = va_arg(args, char *);
		if (s == NULL)
			return (NULL);
		printf("%s", s);
	}

	va_end(args);

	printf("\n");
}
