#include <stdio.h>

void abir_constructor(void) __attribute__ ((constructor));

/**
 * abir_constructor - Function that prints You're beat! and yet, you must allow
 * \nI bore my house upon my back!\n before the main function is executed
 */
void abir_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
