#include<stdio.h>
#include "main.h"




/**
*times_table- prints time from 0 to 23
*/
void times_table(void)
{
	int i, j, prdct;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			prdct = i * j;

			if (prdct <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	
	}
}
