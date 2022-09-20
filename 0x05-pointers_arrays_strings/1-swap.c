#include "main.h"

/**
 *swap_int - function that swaps a with b and b with a
 *@a:first  value
 *@b:second value
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
