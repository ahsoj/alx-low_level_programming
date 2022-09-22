# include "main.h"

/**
 * stract - Concatinates the string pointed by @src, including the terminating null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon
 * @src: The source string to be append to @dest
 */

char *_strcat(char *dest, char *src)
{
	int con = 0, dest_len = 0;

	while(dest[con++])
		dest_len++;
	for (con = 0; src[con]; con++)
		dest[dest_len++] = src[con];
	return (dest);
}
