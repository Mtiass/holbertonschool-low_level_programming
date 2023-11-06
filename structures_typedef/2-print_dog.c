#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Entry point
 * Description:function that prints a struct dog.
 * @d: dog's information to be printed.
 * Return:
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, (*d).age, d->owner);
	}
}	
