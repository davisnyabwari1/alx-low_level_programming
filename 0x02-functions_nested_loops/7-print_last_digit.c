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

	lastdigit = number % 10;
	if (lastdigit < 0)
		lastdigit *= -1;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
