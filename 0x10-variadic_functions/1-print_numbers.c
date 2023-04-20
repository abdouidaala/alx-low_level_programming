#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			exit(1);
		if (i >= 0)
			printf("%s", separator);
		printf("%d", va_arg(args, int));
	}

	va_end(args);

	printf("\n");
}
