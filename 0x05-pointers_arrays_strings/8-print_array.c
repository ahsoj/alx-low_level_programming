# include "main.h"
# include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != (n -1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}

