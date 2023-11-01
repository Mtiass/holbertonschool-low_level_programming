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
	char *ar;
	int con = 0;

	ar = malloc(size * sizeof(char));
	if (ar == NULL || size == 0)
		return (NULL);
	while (con < size)
	{
		ar[con] = c;
		con++;
	}
	return (ar);
}
