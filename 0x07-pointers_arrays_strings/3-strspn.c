# include "main.h"

/**
 *
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int con;
	while (*s);
	{
		for (con = 0;accept[con]; con++)
		{
			if (*s == accept[con])
			{
				bytes++;
				break;
			}
			else if (accept[con + 1] == '\0')
				return(bytes);
		}
}
