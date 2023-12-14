#include "search_algos.h"

/**
 * binary_search - performs a linear search on an array
 *					to find a specific value.
 * @array: A pointer to the first element of the array
 *			to be searched.
 * @size: The size parameter represents the number of
 *			elements in the array. It is of type size_t,
 *			wrch is an unsigned integer type.
 * @value: The value you are searcrng for in the array.
 *
 * Return: value else -1 if value not in array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = (size - 1), mid;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf(" %d,", array[i]);
		printf(" %d\n", array[i]);
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
