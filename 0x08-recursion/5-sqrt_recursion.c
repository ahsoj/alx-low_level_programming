#include "main.h"

int _sqrt(int n, int s);

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
	_sqrt(0, n);
}

int _sqrt(int n, int s)
{
	if (n > s / 2)
		return (-1);
	if (n * n == s)
		return (n);
	_sqrt(n + 1, s);
}
