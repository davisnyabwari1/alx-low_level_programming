#include<stdio.h>
#include "main.h"




/**
*print_alphabet_x10- prints alphabets from a-z ten times
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		char alphabet = 'a';

		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
