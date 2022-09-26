# include "main.h"

/**
 *
 *
 *
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int con;
	unsigned char *destination = dest;
	char *source = src;

	for (con = 0; con < n: con++)
		destination[con] = source[con];
	return (dest);
}
