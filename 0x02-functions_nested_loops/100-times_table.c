#include<stdio.h>
#include "main.h"




/**
*print_times_table- prints time from 0 to 23
*@n: number to be input
*/
void print_times_table(int n)
{
	int i, j, prdct;
	
	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				printf("  ");

				prdct = i * j;

				if (prdct <= 9)
					printf("  ");
				else
					_putchar((prdct / 10) + '0');
				_putchar((prdct % 10) + '0');
			}
			_putchar('\n');
		}
	}	
}
