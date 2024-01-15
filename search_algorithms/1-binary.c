#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 * Return: index where value is located or -1 on error case.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, mid, right;

	if (array == NULL || size <= 1)
		return (-1);
	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = (left + right) / 2;
		printarr(array, left, right + 1);

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
/**
 * printarr - Function to print an array.
 * @array: array to be printed.
 * @start: beginning of the array.
 * @end: end of the array.
 * Return: void.
 */
void printarr(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d", array[i]);
		if (i != end - 1)
			printf(", ");
	}
	printf("\n");
}
