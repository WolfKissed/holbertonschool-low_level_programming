#include "dog.h"
/**
 * init_dog - Initializes var
 * @d: struct
 * @name: char
 * @age: float
 * @owner: char
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}
