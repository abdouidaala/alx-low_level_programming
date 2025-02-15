#include "main.h"

int main()
{
    short result = 0;

    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            result = i * j;
            if (result < 10)
                putchar(' ');
            printf("%d, ", result);
        }
        putchar('\n');
    }
    return 0;
}