#include<stdio.h>
#include "main.h"

/**
*main - Entry point
*
*Return:Always 0(success)
*/
int main(void)
{
	unsigned long t1 = 0, t2 = 1, sum;
	float tot_sum;

	while (1)
	{
		sum = t1 + t2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			tot_sum += sum;
		t1 = t2;
		t2 = sum;
	}
	printf("%.0f\n", tot_sum);
	return (0);
}

