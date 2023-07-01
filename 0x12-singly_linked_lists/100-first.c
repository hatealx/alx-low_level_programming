#include <stdio.h>

/**
 * startup - apply the constructor
 *
 */
void startup(void)__attribute__((constructor));

/**
 * startup - starting my startup
 */

void startup(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
