# include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
