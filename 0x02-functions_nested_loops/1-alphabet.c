#include<stdio.h>
#include "main.h"

/**
*prints alphabets from a-z
*
*/
void print_alphabet(void)
{
	char alphabet = 'a';
	
	for ( alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{	
		_putchar(alphabet);
	}
	_putchar('\n');
}
