#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print-all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 's':
					printf("%s%s", sep, va_arg(args, char *));
					break;
				case 'f':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
