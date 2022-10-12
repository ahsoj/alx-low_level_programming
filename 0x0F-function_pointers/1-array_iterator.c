#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter on each element of an array.
 *
 * @size: size of an array
 * @action: is a pointer to the function you need to use.
 *
 * Return: 0.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	if (!array || !action)
		return;
	for (i=0;i<size;i++)
		action(array[i]);
}
