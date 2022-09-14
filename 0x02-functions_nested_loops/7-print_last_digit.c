#include<stdio.h>
#include "main.h"


/**
*print_last_digit - determines the last digit of a number
*@number: value to be checked
*
*Return:Always 0(success)
*/
int print_last_digit(int number)
{
	int lastdigit;

	if (lastdigit < 0)
		return (abs(number) %  10);
	else
		lastdigit = number % 10;
		return (lastdigit);
}
