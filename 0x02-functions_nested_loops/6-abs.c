#include<stdio.h>
#include <stdlib.h>
#include "main.h"


/**
*_abs - determines the abs value of a number
*
*
*Return:Always 0(success)
*/
int _abs(int number)
{
	int absnum;
	absnum = abs(number);
	printf("%d", absnum);
	return (0);
}
