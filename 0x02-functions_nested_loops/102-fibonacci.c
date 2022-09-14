#include<stdio.h>
#include "main.h"

/**
*main - Entry point
*
*Return:Always 0(success)
*/
int main(void)
{
	int count;
	unsigned long t1 = 0, t2 = 1, sum;

	for (count = 0; count < 50; count ++)
	{
		sum = t1 + t2;
		prinf("%lu", sum);
		t1 = t2;
		t2 = sum;

		if (count == 49)
			prinf("\n");
		else
			printf(",");
	}
	return (0);
}

