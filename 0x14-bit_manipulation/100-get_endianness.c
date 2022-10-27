#include "main.h"

/**
 * get_endianness - that checks the endianess
 *
 * Return: 0 if bog endian, 1 if the little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
