#include "main.h"

void reverse_array(int *a, int n)
{
	int i, v;

	for (i = 0; i < n / 2; i++)
	{
		v = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = v;
	}
}
