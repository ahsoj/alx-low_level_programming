# include "main.h"

/**
 *
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int con;
	if (*needle == 0)
		return (haystack)
		{
			con = 0;
			if(haystack[con] == needle[con])
			{
				do{
					if(needle[con + 1] == '\0')
						return(haystack);
					con++;
				}while (haystack[con] == needle[con]);
			}
			haystack++;
		}
}

