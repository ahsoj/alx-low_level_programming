#include "main.h"

/*
 * _puts_recursion - is function print a sting followed by a new line
 *
 * @s: store string to be printed
 *
 */
void _puts_recursion(char *s)
{
	int len = strlen(s) + 1;
	char *temp = alloca(len);

	int i;
	for (i = 0; i < len; i++)
	{
		char ch = s[i];
		if (ch == '\n')
			break;
		temp[i] = ch;
	}
	temp[i] = 0;
	puts(temp);
}
