#include "function_pointers.h"
/**
 * array_iterator - Entry point
 * Description:function that executes a function given as a parameter on each
 * element of an array.
 * @array:pointer type integer(array of integers)
 * @size: size of the array.
 * @action: pointer to a function.
 * Return:
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t con;

	if (action != NULL)
	{
		for (con = 0; con < size; con++)
		{
			if (array != NULL)
			{
				action(array[con]);
			}
		}
	}
}
