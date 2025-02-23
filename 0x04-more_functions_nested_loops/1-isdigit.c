#include "main.h"

/**
 * @brief _isdigit - Checks for numbers
 *
 * @param c character to checked
 *
 * @return 1 OR 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
