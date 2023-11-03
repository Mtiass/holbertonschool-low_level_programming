#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Entry point
 * Description:function that allocates memory using malloc.
 * @b: int which determinates the memory to be allocated.
 * Return: void pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
