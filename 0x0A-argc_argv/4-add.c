#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>                                                                                                          
/**
 * main - add positive numbers.
 * @argv: arrays of cmd line argumetns
 * @argc: number of cmd line arguments
 *
 * Return: success 0.
 */
int main(int argc, char* argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0;argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
