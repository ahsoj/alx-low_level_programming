# include "main.h"

/**
 *
 *
 */
char *_strchr(char *s, char c)
{
	int con;

	for (con = 0; s[con] >= '\0'; con++)
	{
		if(s[con] == c)
			return (s + con);
	}
	return ('\0');
}
