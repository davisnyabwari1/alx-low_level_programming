#include "main.h"

/**
 * print_line - function that draws a line on the terminal
 * @n: number of times an undescore is printed
 */
void print_line(int n)
{
	int counter;

	if (n > 0)
	{
		counter  = 0;
		while (counter < n)
		{
		       _putchar('_');
		       counter++;
		}
	}
	_putchar('\n');
}
			
