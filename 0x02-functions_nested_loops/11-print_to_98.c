#include<stdio.h>
#include "main.h"




/**
*print_to_98- prints alphabets from 0-98
*@n: value to start loop
*/
void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		while (i > 98)
			printf("%d, ", n--);

		printf("%d\n", n);
	}
	else
       	{
		while (i < 98)
			printf("%d, ", n++);

		printf("%d\n", n);

	}
}
