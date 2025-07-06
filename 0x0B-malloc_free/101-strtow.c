#include "main.h"
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_empty - Checks if a string contains only space characters.
 * @str: Pointer to the input string to be checked.
 *
 * Return: true if the string is empty or contains only spaces,
 *         false if it contains any non-space character.
 */
bool is_empty(char *str)
{
	int i = 0;

	for (; str[i]; i++)
	{
		if (str[i] != ' ')
			return (false);
	}

	return (true);
}

/**
 * count_words - Counts the number of words in a given string.
 * A word is defined as a sequence of non-space characters separated by spaces.
 * @str: The input string to be analyzed.
 *
 * Return: The number of words found in the string.
 */
int count_words(const char *str)
{
	int nWords = 0, i = 0, j = 0;

	for (; str[i]; i++)
	{
		if (str[i] == ' ')
			continue;
		for (j = i; str[j] != ' '; j++, i++)
			;
		nWords++;
	}

	return (nWords);
}

/**
 * strtow - Splits a string into an array of words.
 * @str: The input string to split.
 *
 * This function takes a string and splits it into individual words,
 * allocating memory for each word and returning a NULL-terminated array
 * of strings (words). Words are separated by spaces. Consecutive spaces
 * are treated as a single separator. Memory for the array and each word
 * is dynamically allocated and should be freed by the caller.
 *
 * Return: Pointer to the array of words (strings), or NULL if str is NULL,
 *         empty, or if memory allocation fails.
 */
char **strtow(char *str)
{
	int i = 0, j = 0, k = 0, l = 0, m = 0;
	int nWords = 0, nChars = 0;
	char **pStr = NULL;

	if (!str || !(*str) || is_empty(str))
		return (NULL);

	nWords = count_words(str);
	pStr = malloc(sizeof(char *) * (nWords + 1));

	if (!pStr)
		return (NULL);

	for (k = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			continue;
		m = i;
		for (j = i, nChars = 0; str[j] && str[j] != ' '; j++, i++, nChars++)
			;
		pStr[k] = malloc(sizeof(char) * (nChars + 1));
		if (!pStr[k])
		{
			for (l = 0; l < k; l++)
				free(pStr[l]);

			return (NULL);
		}
		for (l = 0; l < nChars; l++, m++)
			pStr[k][l] = str[m];
		pStr[k][l] = '\0';
		k++;
	}
	pStr[k] = NULL;

	return (pStr);
}
