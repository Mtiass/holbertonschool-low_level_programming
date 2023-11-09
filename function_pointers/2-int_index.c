#include "function_pointers.h"
/**
 * int_index - Entry point
 * Description:function that searches for an integer.
 * @array: pointer to an int array
 * @size: var type int which is size of array.
 * @cmp: function typ
 * Return:
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int con = 0;

	if (size <= 0)
	{
		return (-1);
	}
	for (; con < size; con++)
	{
		if (cmp(array[con] != 0))
		{
			return (con);
		}
	}
	return (-1);
}
