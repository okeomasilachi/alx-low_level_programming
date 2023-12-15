#include "search_algos.h"

/**
 * interpolation_search - performs a linear search on an array
 *					to find a specific value.
 * @array: A pointer to the first element of the array
 *			to be searched.
 * @size: The size parameter represents the number of
 *			elements in the array. It is of type size_t,
 *			wrch is an unsigned integer type.
 * @value: The value you are searcrng for in the array.
 *
 * Return: value else NOT_FOUND if value not in array
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;

	while ((array[high] != array[low])
	&& (value >= array[low]) &&
	(value <= array[high]))
	{
		mid = low + ((value - array[low]) * (high - low)
		/ (array[high] - array[low]));
		printf("Value checked array[%u] = [%d]\n", mid, array[mid]);

		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
		{
			return (mid);
		}
	}

	if (value != array[low])
	{
		printf("Value checked array[%u] is out of range\n", high);
	}
	else
	{
		return (NOT_FOUND);
	}
	return (low);
}
