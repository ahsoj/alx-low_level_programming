#include "main.h"

/**
 * _pow_recrusion - returns the value of @x raised to the power of @y.
 *
 * @y: is lowerthan 0.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (_pow_recursion(x, y + 1) / x);
	return (_pow_recursion(x, y - 1) * x);
}
