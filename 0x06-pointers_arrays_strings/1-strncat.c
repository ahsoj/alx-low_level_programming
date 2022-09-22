# include "main.h"

/**
 * _strncat - Concatenates two strings using at most an inputted number number of bytes from src
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from srcto be appended to dest.
 *
 * Return: Apointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int con = 0, dest_len = 0;

	while (dest[con])
		dest_len++;

	for(con = 0;src[con] && con < n; con++)
		dest[dest_len++] = src[con];
	return (dest);
}
