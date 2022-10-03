#include<stdio.h>
#include <ctype.h>
#include "main.h"


/**
*_isalpha - determines whether the letter is an alphabet or not
*@c: character checked
*
*Return:Always 0(success)
*/
int _isalpha(int c)
{
	if (isalpha(c) > 0)
		return (1);
	return (0);
}
