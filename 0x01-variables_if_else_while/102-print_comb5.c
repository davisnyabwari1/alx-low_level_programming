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
	int digit;
	int second;

	for (digit = 0; digit <= 98; digit++)
	{
		for (second = digit + 1; second <= 99; second++)
		{
			putchar((digit % 10) + '0');
			putchar((digit % 10) + '0');
			putchar(' ');
			putchar((second % 10) + '0');
			putchar((second % 10) + '0');

			if (digit == 98 && second == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
