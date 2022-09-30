#include <stdlib.h>
#include <stdio.h>

/**
 *
 * main - function to count arguments
 * @argc: count number of arguments
 *
 * Return: 0, sucess
 */
int main(int argc, char* argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return 0;
}
