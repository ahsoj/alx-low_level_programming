#include <stdlib.h>
#include <stdio.h>

/**
 * main - function collect and print each @argc
 * @argc: count cmd arguments
 * @argv: fill cmd line arguments in char
 *
 * Return: success 0.
 */
int main(int argc, char* argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}
