#include<stdio.h>
#include "main.h"

/**
* print_most_numbers- prints numbers from 0-9 except 2 & 4
* 
*/
void print_most_umbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{	
		if (i == 2 || i == 4)
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
