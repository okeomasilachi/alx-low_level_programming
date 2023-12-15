#include "search_algos.h"

/**
 * exponential_search - performs an exponential search on an array
 *                      to find a specific value.
 * @array: A pointer to the first element of the array
 *       to be searched.
 * @size: The size parameter represents the number of
 *        elements in the array.
 * @value: The value you are searching for in the array.
 *
 * Return: Index of the key in the array if found, else NOT_FOUND.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	int mid, left, right, i;

	if (size == 0 || array == NULL)
		return (NOT_FOUND);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	/* performing binary search */
	left = bound / 2;
	right = (bound < size) ? bound + 1 : size;
	right--;
	printf("Value found between indexes [%d] and [%d]\n", left, right);
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array:");
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
	return (NOT_FOUND);
}
