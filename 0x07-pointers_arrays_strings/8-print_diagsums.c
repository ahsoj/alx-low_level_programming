# include <stdio.h>
# include "main.h"

/**
 *
 *
 *
 */
void print_diagsums(int *a, int size)
{
	int con;
	int sum1 = 0, sum2 = 0;

	for (con = 0; con < size; con++)
	{
		sum1 += a[con];
		a += size;
	}
	a -= size;

	for(con = 0; con < size; con++)
	{
		sum2 += a[con];
		a -=size;
	}
	printf("%d, %d\n", sum1. sum2);

}
