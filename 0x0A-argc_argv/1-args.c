#include <stdlib.h>
#include <stdio.h>

/**
 *
 * main - function to count arguments
 * @argc: count number of arguments
 *
 * Return: 0, sucess
 */
int main(int argc, char* argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argc);
	}
	return 0;
}
