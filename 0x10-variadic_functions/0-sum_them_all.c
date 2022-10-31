#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*sum_them_all - variadic function that adds all values
*@n: number of arguments entered
*Return: 0
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, total = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		total += va_arg(args, int);
	}
	va_end(args);
	return (total);
}
