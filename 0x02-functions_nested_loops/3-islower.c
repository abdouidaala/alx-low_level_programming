#include "main.h"

/**
 * @brief _islower - Checks for lowercase character
 *
 * @param n Number to be checked
 *
 * @return 1 (Success) OR 0 (Failure)
 */
int _islower(int n)
{
	if (n >= 'a' && n <= 'z')
		return (1);

	return (0);
}
