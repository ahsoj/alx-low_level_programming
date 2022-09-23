# include "main.h"

/**
 * reverse_array = Reverse the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int tmp, con;

	for (con = n -1; con >= n / 2; con--)
	{
		tmp = a[n - 1 - con];
		a[n - 1 - con] = a[con];
		a[con] = tmp;
	}
}

