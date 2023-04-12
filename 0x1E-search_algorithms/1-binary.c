#include "search_algos.h"

/**
  * binary-search - search for a calue in a stored arrays
  * @array: pointer to the first element of the array to search
  * @size: number of elements in the arrays
  * @value: value to search for
  *
  * Return: NULL if value is not present else -1
  */

int binary_search(int *array, size_t size, int value)
{

	size_t i, lt, rt;

	if (array == NULL)
		return (-1);

	for (lt = 0, rt = size - 1; rt >= lt;)
	{
		printf("Searching in array: ");
			for (i = lt; i < rt; i++)
				printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = lt + (rt - lt) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			rt = i - 1;
		else
			lt = i + 1;
	}

	return (-1);
}
