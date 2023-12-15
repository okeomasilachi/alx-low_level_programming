#include "search_algos.h"


/**
 * advanced_binary - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located,
 *		or -1 if not present or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (binary_s(array, 0, size - 1, value));
}

/**
 * binary_s - Recursive helper function for advanced_binary
 * @array: Pointer to the first element of the array to search in
 * @start: The start index of the current subarray
 * @end: The end index of the current subarray
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1 if not present
 */
int binary_s(int *array, int start, int end, int value)
{
	int mid, i;

	if (start > end)
		return (-1);

	mid = (start + end) / 2;

	printf("Searching in array: ");
	for (i = start; i < (end); i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	if (array[mid] == value && array[mid - 1] != value)
		return (mid);
	else if (array[mid] == value && array[mid - 1] == value)
		return (binary_s(array, start, mid, value));
	else if (array[mid] < value)
		return (binary_s(array, mid + 1, end, value));
	else
		return (binary_s(array, start, mid - 1, value));
}
