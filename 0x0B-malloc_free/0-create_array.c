#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
    if (size == 0)
    {
        return (NULL);
    }
    else
    {
        int i, *p;

        p = malloc(size * sizeof(c));

        if (p == NULL)
            return (NULL);
        
        for (i = 0; i < p; i++)
        {
            p[i] = c;
            return (p);
        }
    }
    return (0);
}
