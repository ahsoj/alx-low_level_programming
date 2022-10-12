#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - return the index of thr first element for which the @cmp function not return 0
 * @cmp: is a pointer to the index of the to be used to compare values
 *
 * Return: -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i=0;i<size;i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
