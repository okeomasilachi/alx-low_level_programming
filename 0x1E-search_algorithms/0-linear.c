#include "search_algos.h"

/**
 * linear_search - performs a linear search on an array
 *					to find a specific value.
 * @array: A pointer to the first element of the array
 *			to be searched.
 * @size: The size parameter represents the number of
 *			elements in the array. It is of type size_t,
 *			which is an unsigned integer type.
 * @value: The value you are searching for in the array.
 *
 * Return: value else NOT_FOUND if value not in array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (NOT_FOUND);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (NOT_FOUND);
}
