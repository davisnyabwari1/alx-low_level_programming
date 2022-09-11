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
	char alphabet = 'A';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
