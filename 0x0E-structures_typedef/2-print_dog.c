#include "dog.h"

/**
*print_dog - function that prints struct dog
*@d: pointer to a variable
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name:%s\n", d->name);
	if (d->age < 0)
		printf("Name: (nil)\n");
	else
		printf("Name:%f\n", d->age);
	if (d->owner == NULL)
		printf("Name: (nil)\n");
	else
		printf("owner:%s\n", d->owner);
}
