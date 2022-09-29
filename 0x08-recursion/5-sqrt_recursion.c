#include "main.h"

/**
 * find_sqrt - finds the natural srqt of an inputted number.
 * @num: the number to find the sqrt of
 * @root: the root to be tested
 *
 * Return: if the number has
 *
 */
int _sqrt_recursion(int n)
{
	if (n <= 1)
		return (n);
	return (_sqroot(0, n));
}

int _sqroot (int n, int s)
{
	if (n > s / 2)
		return (-1);
	if (n * n == s)
		return (n);
	return (_sqroot(n + 1, s);
}
