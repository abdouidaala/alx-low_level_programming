#include "lists.h"

/**
 * before_main - Function marked with the constructor attribute to execute
 *               before the main function.
 */
__attribute__((constructor)) void before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
