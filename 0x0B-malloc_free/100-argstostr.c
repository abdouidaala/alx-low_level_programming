#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenate all the arguments of the program into a one string.
 *
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return: pointer to a new string containing all arguments separated by '\n',
 *         or NULL if ac == 0, av == NULL, or memory allocation fails.
 *
 * Description:
 * This function allocates memory for and creates a new string that contains
 * each argument from the array 'av', separated by newline characters. The
 * resulting string is dynamically allocated and should be freed by the caller.
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	char *s, *ps;

	if (!ac || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}
	len++;

	s = malloc(sizeof(char) * len);

	if (!s)
	{
		free(s);
		return (NULL);
	}
	ps = s;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			*s++ = av[i][j];
		*s++ = '\n';
	}
	*s = '\0';

	if (!ps)
		return (NULL);

	return (ps);
}
