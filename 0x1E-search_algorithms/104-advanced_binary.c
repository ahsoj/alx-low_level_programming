#include "search_algos.h"

/**
  * advanced_binary_recursive - Searches recursively for a value in a sorted
  *                             array of integers using binary search.
  * @array: A pointer to the first element of the [sub]array to search.
  * @size: size of the array
  * @value: The value to search for.
  *
  * Return: If the value is not present, -1.
  *         Otherwise, the index where the value is located.
  *
  */

int advanced_binary_recursive(int *array, size_t size, int value)
{

	size_t i, mid = size / 2;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");
	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
	{
		if (mid > 0)
			return (advanced_binary(array, mid + 1, value));
		return ((int)mid);
	}

	if (value < array[mid])
		return (advanced_binary(array, mid + 1, value));

	mid++;
	return (advanced_binary(array + mid, size - mid, value) + mid);
}

/**
 * advanced_binary - calls to rec_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int advanced_binary(int *array, size_t size, int value)
{

	int index = advanced_binary_recursive(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);
	return (index);
}
