#include<stdio.h>
#include "main.h"
#include<stdlib.h>

/**
*print_last_digit - determines the last digit of a number
*@number: value to be checked
*
*Return:Always 0(success)
*/
int print_last_digit(int number)
{
	int lastdigit;
	
	if (number < 0)
	{
		lastdigit = (abs(number)) % 10;
		_putchar(lastdigit + '0');
	}
	else
	{
		lastdigit = number % 10;
		_putchar(lastdigit + '0');
	}
	return (lastdigit);
}
