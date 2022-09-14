
# include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase,
 * followed by a new line
 *
 * Description:prints the alphabet, in lowercase,
 * followed by lowercase
 *
 * Return: void
 */
void print_alphbet(void)
{
	char v;
	v = 'a';
	while (v <= 'z')
	{
		_putchar(v);
		v++;
	}
	_putchar('\n');
}
