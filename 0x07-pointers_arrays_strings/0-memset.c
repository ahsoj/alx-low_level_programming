# include "main.h"

/**
 *
 *
 *
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int con;
	unsigned char *memory = s, value = b;
	for(con = 0; con < n; con++)
		memory[con] = value;
	return (memory);
}
