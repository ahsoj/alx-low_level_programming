# include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: Apointers to the second string to be compared.
 *
 * Return: 
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 &&s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

