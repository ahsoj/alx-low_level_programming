#include "main.h"
/**
 *
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
	{
		return 0;
	}
	while(i * i <= n)
	{
		if (n % i == 0)
		{
			return 0;
		}
		i++;
	}
	return 1;
}
