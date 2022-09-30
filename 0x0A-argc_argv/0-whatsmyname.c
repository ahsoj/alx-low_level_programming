#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the name of the progrms
 * @argv: arguments
 * @argc: count arguments
 *
 * Return: succes
 */
int main(int argc, char* argv[])
{
	int i;
	for (i = 0;i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}
