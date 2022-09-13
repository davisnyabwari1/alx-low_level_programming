#include<stdio.h>
#include "main.h"

/**
*main - Entry point
*
*Return:Always 0(success)
*/
void print_alphabet(void)
{
	char alphabet = 'a';
	
	for ( alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{	
		_putchar(alphabet);
	}
	print_alphabet();
	_putchar('\n');
	return;
}
