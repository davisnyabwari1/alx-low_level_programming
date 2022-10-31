#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
*print_numbers - variadic function that prints numbers
*@separator: separates values with coma
*@n: numbers to be printed
*Return: 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (strlen(separator) != 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
