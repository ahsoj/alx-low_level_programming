include "main.h"
/**
 * print_sign - prints the sign of a number
 *
 * Description: prints the sign
 *
 * @n: is a variable
 * Return: 1 for positive number, 0 for 0, -1 for negative number
 */
int print_sign(int n)
{
	if(n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0);
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
