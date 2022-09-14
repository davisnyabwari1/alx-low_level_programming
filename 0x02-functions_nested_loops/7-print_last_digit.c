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

	lastdigit = number % 10;
	return (lastdigit);
}
