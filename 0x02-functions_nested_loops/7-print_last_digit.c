
#include "main.h"

/**
 * print_last_digit - prints the last gigit of number.
 *
 * Description: prints the last digit of number
 * @i: n is an integer
 *
 * Return: integer return type
 */

int print_last_digit(int i)
{
	int r;
	r = i % 10;
	if (i < 0)
	{
		r = r * -1;
	}
	_putchar(r + '0');
	return (r);
}
