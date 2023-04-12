#include "search_algos.h"

/**
  * interpolation_search - Searches for a value in a sorted array
  *                        of integers using interpolation search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  */

int interpolation_search(int *array, size_t size, int value)
{

	size_t i, lt, rt;

	if (array == NULL)
		return (-1);

	for (lt = 0, rt = size - 1; rt >= lt;)
	{
		i = lt + (
			((double)(rt - lt) / (array[rt] - array[lt])
			) * (value - array[lt])
			);
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}
	if (array[i] == value)
		return (i);
	if (array[i] > value)
		rt = i - 1;
	else
		lt = i + 1;
	}

	return (-1);
}
