#include "main.h"

/**
 * clear_bit - sets the value a bit to 0 at a given index
 * @index: is the indes , starting fromt 0 ofthe bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
