#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints number given as parameter
 * @separator: string to be printed between numbers
 * @n: number of integer passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	
	va_start(args, n);

	for (i = 0;i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(args, int));
		else if (separator && i == 0)
			printf("%d", va_arg(args, int));
		else
			printf("%s%d", separator, va_arg(args, int));
	}
	va_end(args);

	printf("\n");
}
