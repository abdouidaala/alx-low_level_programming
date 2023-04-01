#include "main.h"
#include <ctype.h>
char *leet(char *s)
{
	int i, j;

	char c[] = "ALETOaleto";

	for (int i = 0; s[i] != '\0'; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (s[i] == c[j])
			{
				s[i] = toupper(s[i]);
				switch (s[i])
				{
					case 'A':
						s[i] = '4';
						break;
					case 'L':
						s[i] = '1';
						break;
					case 'E':
						s[i] = '3';
						break;
					case 'T':
						s[i] = '7';
						break;
					case 'O':
						s[i] = '0';
						break;
					default:
						break;
				}
			}
		}
	}
	return (s);
}
