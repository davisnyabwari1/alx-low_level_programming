#include "dog.h"
#include <stdlib.h>
/**
*init_dog - function that initializes a struct variable
*@d: pointer
*@name: name of dog
*@age: age of dog
*@owner: owner of dog
*Return: 0
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
		printf("No Memory allocated");
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

