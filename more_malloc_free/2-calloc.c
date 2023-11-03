#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc - Entry point
 * Description:function that allocates memory for an array, using malloc.
 * @nmemb: number of elements of the array.
 * @size: size in bytes of each element.
 * Return:void pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *intar;

	if (nmemb == 0 || size == 0)
		return (NULL);
	intar = malloc(nmemb * size);
	if (intar == NULL)
	{
		free(intar);
		return (NULL);
	}
	memset(intar, 0, nmemb * size);
	return (intar);
}
