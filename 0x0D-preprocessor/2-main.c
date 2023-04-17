#include "main.h"

int main(void)
{
	char *ptr = __FILE__;
	int i = 0;

	while (ptr[i])
	{
		_putchar(ptr[i]);
		i++;
	}
	return (0);
}
