#include "main.h"
/**
*print_diagsums - prints the sum of diagonals
*@a: the array
*@size: size of an array
*/
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}
	a -= size;

	for (i = size; i >= 0; i++)
	{
		sum2 += a[i];
		a -= size;
	}
	printf("%d, %d", sum1, sum2);
}

