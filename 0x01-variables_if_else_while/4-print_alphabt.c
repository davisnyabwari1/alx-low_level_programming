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
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter = 'q' || letter = 'e')
		{
			continue;
		}
		else
		{
			putchar(letter);

		}

	}
	putchar('\n');
	return (0);
}
