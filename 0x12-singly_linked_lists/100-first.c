#include <stdio.h>

void before_main(void) __attribute__((constructor));

/**
 * before_main - Function marked with the constructor attribute to execute
 *               before the main function.
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
