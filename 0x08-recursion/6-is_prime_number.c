#include "main.h"
/**
 *
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return 0;
	return (is_prime(n, start));
}

int is_prime(int n, int start)
{
	if (start <= 1)
		return 1;
	if (n % start == 0)
		return 0;
	return (is_prime(n, start - 1));
}
