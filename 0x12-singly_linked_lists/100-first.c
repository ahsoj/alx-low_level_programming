#include <stdio.h>

/**
 * bmain - function excuted before main
 *
 * Return: no return
 */

void first(void) __attribute__ ((constructor)) bmain();
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n "); 
}
