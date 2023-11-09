#include "function_pointers.h"
/**
 * int_index - Entry point
 * Description:function that searches for an integer.
 * @array: pointer to an int array
 * @size: var type int which is size of array.
 * @cmp: function typ
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int con = 0;

	if (size <= 0 || array == NULL)
	{
		return (-1);
	}
	if (cmp != NULL)
	{
		for (; con < size; con++)
		{
			if (cmp(array[con]) != 0)
			{
				return (con);
			}
		}
	}
	return (-1);
}
