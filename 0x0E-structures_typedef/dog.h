#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
*struct dog - dog properties
*@name: dog's name
*@age: dog's age
*@owner: owner
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
