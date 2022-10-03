#include<stdio.h>
#include <ctype.h>
#include "main.h"


/**
*_isdigit - determines whether the letter is in lower case
*@c: character checked
*
*Return:Always 0(success)
*/
int _isdigit(int c)
{
	if (isdigit(c) > 0)
		return (1);
	return (0);
}
