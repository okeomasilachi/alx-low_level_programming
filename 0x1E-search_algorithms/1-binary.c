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
	size_t low = 0, hi = size - 1, mid;
	size_t i;

	if (array == NULL)
		return (-1);

	while (low <= hi)
	{
		mid = (low + hi) / 2;
		printf("Searching in array: ");
		for (i = low; i < hi; i++)
			printf(" %d,", array[i]);
		printf(" %d\n", array[i]);
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			hi = mid - 1;
	}

	return (-1);
}
