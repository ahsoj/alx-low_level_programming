#include "search_algos.h"

/**
  * _binary_search - search for a calue in a stored arrays
  * @array: pointer to the first element of the array to search
  * @left: number
  * @right: number
  * @value: value to search for
  *
  * Return: NULL if value is not present else -1
  */

int _binary_search(int *array, size_t left, size_t right, int value) {

    size_t i;
    if (array == NULL) return (-1); 

    while (left <= right) {
        size_t mid = left + (right - left) / 2;

        printf("Searching in array: ");
        for (i = left; i < right; i++)
	    printf("%d, ", array[i]);
	printf("%d\n", array[i]);

        if (array[mid] == value) {
            return mid;
        }
        if (array[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}


/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  */
int exponential_search(int *array, size_t size, int value) {

    size_t i = 0, right;

    if (array == NULL) return (-1);

    if (array[0] != value) {
        for (i = 1; i < size && array[i] <= value; i = i * 2)
            printf("Value checked array[%ld] = [%d]\n", i, array[i]);
    }

    right = i < size ? i : size - 1;
    printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
    return (_binary_search(array, i / 2, right, value));
}
