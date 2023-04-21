#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

void print_all(const char * const format, ...)
{
        va_list args;
        int len = strlen(format);
        int i;

        va_start(args, format);
        i = 0;
        while (i < len)
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
                                printf("%s", va_arg(args, char *));
                                break;
                }
                i++;
        }
        va_end(args);
        printf("\n");
}
