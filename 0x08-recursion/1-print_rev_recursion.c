#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - function to print a string in reverse
 * @s: container of string character
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);

	}
}
