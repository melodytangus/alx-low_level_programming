#include "dog.h"
/**
 * init_dog - Initialize struct dog in header file
 * @d: struct name pointer
 * @name: name of dog element 1
 * @age: age of dog element 2
 * @owner: owner of dog element 3
 * Return: Null
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
