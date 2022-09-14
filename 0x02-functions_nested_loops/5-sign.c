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
	if ( n > 0)
	{
		return (1);
	}
	else if ( n == 0)
	{
		return (0);
	}
	else if ( n < 0)
	{
		return (-1);
	}
}
