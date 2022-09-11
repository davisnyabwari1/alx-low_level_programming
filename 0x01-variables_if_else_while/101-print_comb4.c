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
	int third;

	for (digit = 0; digit < 8; digit++)
	{
		for (second = digit + 1; second < 9; second++)
		{
			for (third = second + 1; third < 10; third++)
			{
				putchar((digit % 10) + '0');
				putchar((second % 10) + '0');
				putchar((third % 10) + '0');

				if (digit == 7 && second == 8 && third == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
