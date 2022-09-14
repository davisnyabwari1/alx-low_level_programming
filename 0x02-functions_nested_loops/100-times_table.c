#include<stdio.h>
#include "main.h"




/**
*print_times_table- prints time from 0 to 23
*@n: number to be input
*/
void print_times_table(int n)
{
	int i, j, prdct;
	
	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				prdct = i * j;

				if (prdct <= 99)
					_putchar(' ');
				if (prdct <= 9)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prdct / 10) + '0');
				}
				_putchar((prdct % 10) + '0');
			}
			_putchar('\n');
		}
	}	
}
