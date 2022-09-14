#include<stdio.h>
#include <ctype.h>
#include "main.h"


/**
*print_sign - determines whether a number is +, negative or zero
*@n: character checked
*
*Return:Always 0(success)
*/
int print_sign(int n)
{
	if (n <= 0)
	{
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
