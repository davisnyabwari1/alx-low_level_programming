#include<stdio.h>
#include "main.h"

/**
*main - Entry point
*
*Return:Always 0(success)
*/
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (1 % 5) == 0)
			sum += i;
	}
	printf("%d",sum);
	return (0);
}
