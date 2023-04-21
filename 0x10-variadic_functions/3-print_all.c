#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - prints anything(any data type)
 * @format: pointer to string of data format types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, len = strlen(format);
	unsigned int j;
	char ifcs[] = "ifcs";
	char *str;

	va_start(args, format);
	while ((i < len) && format != NULL)
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		j = 0;
		while (j < strlen(ifcs))
		{
			if ((ifcs[j] == format[i]) && i < (len - 1))
				printf(", ");
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
