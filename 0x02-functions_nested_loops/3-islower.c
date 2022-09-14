#include<stdio.h>
#include <ctype.h>
#include "main.h"





/**
*_islower('c') - determines whether the letter is in lower case
*
*Return:Always 0(success)
*/
int _islower(int c)
{
	if (islower(c) > 0)
		return (1);
	return (0);
}
