#include <stdio.h>
#include <stdlib.h>

/**
 *print_name - print the function name
 *
 *Return: 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
