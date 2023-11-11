#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Entry point
 * Description:function that creates a new dog.
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner
 * Return: pointer to new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *copyn;
	char *copyo;

	new_dog	= malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	copyn = strdup(name);
	copyo = strdup(owner);
	if (copyn == NULL || copyo == NULL)
	{
		if (copyn != NULL)
			free(copyn);
		if (copyo != NULL)
			free(copyo);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = copyn;
	new_dog->age = age;
	new_dog->owner = copyo;
	return (new_dog);
}
