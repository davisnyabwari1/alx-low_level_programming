#include<stdio.h>
#include <ctype.h>
#include "main.h"


/**
*_isupper - determines whether the letter is in lower case
*@c: character checked
*
*Return:Always 0(success)
*/
int _isupper(int c)
{
	if (isupper(c) > 0)
		return (1);
	return (0);
}
