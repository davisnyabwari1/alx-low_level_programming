#include<stdio.h>
#include "main.h"




/**
*print_to_98- prints alphabets from 0-98
*@n: value to start loop
*/
void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		for (i = n;  i >= 98; i--)
		{
			if (i > 98)
			{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
			}
		}
	}
	else
       	{
		for (i = n; i <= 98; i++)
		{
			if (i < 98)
			{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
			}
		}

	}
	_putchar('\n');
}
