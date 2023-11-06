#ifndef _dog_h
#define _dog_h
/**
 * struct dog - dog's information.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 *
 * Description: dog's name, age and owner information.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif
