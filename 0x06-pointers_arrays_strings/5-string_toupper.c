# include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: the string to be changed.
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *)
{
	int con = 0;
	while(str[con])
	{
		if(str[con] >= 'a' && str[con] <= 'z')
			str[con] -= 32;
		con++;
	}
	return (str);
}


