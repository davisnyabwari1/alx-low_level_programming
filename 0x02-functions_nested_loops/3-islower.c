#include<stdio.h>
#include <ctype.h>
#include "main.h"


/**
*_islower - determines whether the letter is in lower case
*@c: character checked
*
*Return:Always 0(success)
*/
int _islower(int c)
{
	if (islower(c) > 0)
		return (1);
	return (0);
}
