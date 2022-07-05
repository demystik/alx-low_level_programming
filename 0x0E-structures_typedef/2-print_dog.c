#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - This function prints a struct dog
 * @d: The name of the dog
 *
 * Return: noting to return
 */
void print_dog(struct dog *d)
{
	if (d)

	{
		if (!(d->name))
			printf("%s\n", "Name : (nil)");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("%s\n", "Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);

	}
}
