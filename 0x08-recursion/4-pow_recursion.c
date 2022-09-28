#include "main.h"

/**
 * _pow_recrusion - returns the value of @x raised to the power of @y.
 *
 * @x: the number to be raised.
 * @y: the power
 *
 * Return: if @y is lower than 0. the function should trurn -1.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (_pow_recursion(x, y + 2) + y);
	return (_pow_recursion(x, y - 1) * x);
}
