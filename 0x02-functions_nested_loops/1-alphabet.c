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
	
	void print_alphabet(void)
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
