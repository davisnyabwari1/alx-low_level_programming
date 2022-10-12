#include "main.h"

/**
*print_dog - function that prints struct dog
*@d: pointer to a variable
*/

void print_dog(struct dog *d)
{
	if (d->name == NULL || d->age == NULL || d->owner == NULL)
		printf("Name:(nil)");
}
