#include <stdio.h>

/**
 * bmain - function excuted before main
 *
 * Return: no return
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You'r beat! and yet, youmust allow");
	printf(",\nI bore my house upon my back!\n");
	printf("(A tortoise, having pretty good sense of a hare's nature, challe		nges one to a race.)\n");
}
