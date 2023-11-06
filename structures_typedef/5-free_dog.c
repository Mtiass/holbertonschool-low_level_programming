#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Entry point
 * Description:function that frees dogs.
 * @d: dog to be freed.
 * Return:
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
