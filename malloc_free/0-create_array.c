#include <stdlib.h>
#include "main.h"
/**
 * create_array - Entry point
 * Description:"function that creates an array of
 * chars, and initializes it with a specific char."
 * @size: size of array.
 * @c: char to be intialize the array.
 * Return: pointer to an array.
 */
char *create_array(unsigned int size, char c)
{
	char *ar = malloc(size * sizeof(*ar));

	if (size == 0)
	{
		return ('\0');
	}
	while (*ar != size)
	{
		*ar = c;
		ar++;
	}
	return (ar);
}
