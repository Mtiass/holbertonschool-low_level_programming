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
struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
