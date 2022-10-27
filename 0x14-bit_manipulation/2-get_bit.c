#include "main.h"

/**
 * get_int - return the value of a bit at a given index
 * @index: is the indec, starting from 0 of the bit you want to get
 *
 * Return: the value os the bot at index @index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;
	return (bit_val);
}
