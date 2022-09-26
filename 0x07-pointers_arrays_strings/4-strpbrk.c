# include "main.h"

/**
 *
 *
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int con;
	while(*s)
	{
		for (con = 0; accept[con]; con++)
		{
			if(*s == accept[con])
				return(s);
		}
		s++;
	}

}

