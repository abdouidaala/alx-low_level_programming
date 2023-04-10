#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc == 1)
	{
		argc = 0;

		printf("%d\n", argc);
	}
	else
	{
		argc--;

		printf("%d\n", argc);
	}
	return (0);
}
