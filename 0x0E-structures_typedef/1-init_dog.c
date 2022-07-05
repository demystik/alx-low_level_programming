#include <stdio.h>
#include "dog.h"

/**
 * init_dog - This function initialize a variable of type struct dog
 * @d: The name of the structure
 * @name: The name of the dog
 * @age: How old is the dog
 * @owner: little description about the owner of the dog
 * Return: nothing to return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
