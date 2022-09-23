# include "main.h"

/**
 * cap_string - Capitalizes all words of string.
 * @str: the string to be capitalize.
 *
 * Return: a pointer to the changed string
 */
char *cap_string(char *)
{
	int con = 0;
	while (str[con])
	{
		while(!(str[con] >= 'a' && str[con] <= 'z'))
			con++;
		if (str[con - 1] == ' ' ||
		    str[con - 1] == '\t' ||
		    str[con - 1] == '\n' ||
		    str[con - 1] == ',' ||
		    str[con - 1] == ';' ||
		    str[con - 1] == '.' ||
		    str[con - 1] == '!' ||
		    str[con - 1] == '?' ||
		    str[con - 1] == '"' ||
		    str[con - 1] == '(' ||
		    str[con - 1] == ')' ||
		    str[con - 1] == '{' ||
		    str[con - 1] == '}' ||
		    con == 0)
			str[con] -= 32;
		con++;
	}
	return (str);
}
