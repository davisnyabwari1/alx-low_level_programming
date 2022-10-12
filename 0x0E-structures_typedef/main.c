#include "dog.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main()
{
	struct dog myDog;

	init_dog(&myDog, "Poppy", 3.5, "Bob");

	printf("name is %s, am %.1f\n", myDog.name, myDog.age);
	return (0);
}
