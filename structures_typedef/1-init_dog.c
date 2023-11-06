#include <stdio.h>
#include "dog.h"
#include "main.h"
/**
 * init_dog - Entry point
 * Description:function that initialize a variable of type struct dog
 * @d: dog d.
 * @name: dog d's name.
 * @age: d's age.
 * @owner: d's owner
 * Return:
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
