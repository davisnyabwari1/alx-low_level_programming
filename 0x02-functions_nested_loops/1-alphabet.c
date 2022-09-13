#include<stdio.h>
#include "main.h"

/**
*main - Entry point
*
*Return:Always 0(success)
*/
int main(void)
{
	char alphabet = 'a';
	
	print_alphabet()
	{	
		for ( alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{	
			_putchar(alphabet);
		}
	}
	print_alphabet();
	_putchar('\n');
	return (0);
}
