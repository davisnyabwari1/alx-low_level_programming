#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 0;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
