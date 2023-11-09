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
	if (new_dog != NULL)
	{
		copyn = strdup(name);
		copyo = strdup(owner);
		new_dog->name = copyn;
		new_dog->age = age;
		new_dog->owner = copyo;
	}
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
	}
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
	}
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
