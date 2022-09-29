#include "main.h"
#include <string.h>

/*
 * _puts_recursion - is function print a sting followed by a new line
 *
 * @s: store string to be printed
 *
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
