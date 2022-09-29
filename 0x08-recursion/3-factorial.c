#include "main.h"

/**
 * factorial - return the factorial of a given number.
 * @n: The number to find the factorial of.
 * Return: if n > 0 - factorial of n.
 *         if n < 0 - 1 to indicate an error
 */
int factorial(int n)
{
	int f = n;

	if (n >= 0 && n <= 1)
		return (1);
	if (n < 0)
		return (-1);
	f *= factorial(n - 1);
	return (f);
}
