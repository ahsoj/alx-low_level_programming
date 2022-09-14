
# include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: This program prints _putchar,
 * followed by a new line
 *
 * Return: 0 is success
 */
int main(void)
{
	char p[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);	
}
