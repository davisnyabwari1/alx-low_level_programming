#include<stdio.h>
#include "main.h"




/**
*times_table- prints time from 0 to 23
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d, ", i * j);
		}
	
		_putchar('\n');

	}
}
