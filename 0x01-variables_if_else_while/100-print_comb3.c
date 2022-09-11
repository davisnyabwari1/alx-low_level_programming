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

	for (digit = 0; digit <= 9; digit++)
	{
		for (second = digit + 1; second < 10; second++)
		{
			putchar((digit % 10) + '0');
			putchar((second % 10) + '0');

			if (digit == 8 && second == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
