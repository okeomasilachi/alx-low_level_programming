#include "search_algos.h"

/**
 * print_array - Prints the elements of an array between
 *               two indices (left and right).
 * @array: A pointer to the first element of the array.
 * @left: The starting index.
 * @right: The ending index.
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array:");
	for (i = left; i < right; i++)
		printf(" %d,", array[i]);
	printf(" %d\n", array[i]);
}

/**
 * advanced_binary - performs a linear search on an array
 *                   to find a specific value.
 * @array: A pointer to the first element of the array
 *         to be searched.
 * @size: The size parameter represents the number of
 *        elements in the array. It is of type size_t,
 *        which is an unsigned integer type.
 * @value: The value you are searching for in the array.
 *
 * Return: value else NOT_FOUND if value not in array
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0, right = (size - 1), mid;
	size_t i;

	if (array == NULL || size == 0)
		return (NOT_FOUND);

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		print_array(array, left, right);

		if (array[mid] == value && array[mid - 1] != value)
			return (mid);
		else if (array[mid] == value && array[mid - 1] == value)
		{
			print_array(array, left, mid);

			i = mid;
			do {
				mid--;
			} while (array[mid] == value);

			left = mid + 1;
			mid = i;

			print_array(array, left, mid);

			return (--mid);
		}

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (NOT_FOUND);
}
