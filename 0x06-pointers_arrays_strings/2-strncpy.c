# include "main.h"

/**
 * _strncpy - Copies at most an inputted nuber of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The  source string.
 * @n: The maximum number of the resulting string dest.
 *
 * Return: A Pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int con = 0, src_len = 0;
	while(src[con++])
		src_len++;

	for(con = 0;src[con] && con < n; con++)
		dest[con] = src[con];
	for(con = src_len; con < n; con++)
		dest[con] = '\0';
	return (dest);
}
