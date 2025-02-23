#include "main.h"

/**
 * @brief _isupper - Checks for uppercase character
 *
 * @param c Number to be checked
 *
 * @return 1 (Success) OR 0 (Failure)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
