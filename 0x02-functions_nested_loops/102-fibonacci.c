#include<stdio.h>
#include "main.h"

/**
*main - Entry point
*
*Return:Always 0(success)
*/
int main(void)
{
	int t1 = 1, t2 = 2, nextTerm = 0;
	nextTerm = t1 + t2;
	printf("%d,%d", t1, t2);
	
		while (nextTerm <= 50)
		{
			printf("%d", nextTerm);
			t1 = t2;
			t2 = nextTerm;
			nextTerm = t1 + t2;
		}
	
}
