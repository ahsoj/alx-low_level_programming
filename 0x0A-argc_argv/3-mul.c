#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiply two @argc's as numbers 
 * @argc: number of cmd line arguments.
 * @argv: array of cmd line arguments.
 *
 * Return : Error while @argv < 3.
 */
int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return 0;
}
