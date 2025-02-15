#include "main.h"

/**
 * @brief _isalpha - Checks for Alphabetic Characters
 *
 * @param c Alphabetic character
 *
 * @return 1 (Success) OR 0 (Failure)
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);

	return (0);
}
