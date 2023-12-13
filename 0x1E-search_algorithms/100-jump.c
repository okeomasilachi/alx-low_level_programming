#include "search_algos.h"

/**
 * jump_search - performs a linear search on an array
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
int jump_search(int *array, size_t size, int value)
{
	size_t a, b, k;

	if (array == NULL || size == 0)
		return (-1);
	a = 0;
	b = sqrt(size);
	k = fmin(b, size) - 1;
	printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	while (array[k] < value)
	{
		if (array[a] == value)
		{
			a = a - (k + 1), b = b - (k + 1);
			break;
		}
		if (a != 0)
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		a = b;
		b = b + sqrt(size);
		if (a >= size)
		{
			a = a - (k + 1), b = b - (k + 1);
			printf("Value found between indexes [%ld] and [%ld]\n", a, b);
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
			return (-1);
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", a, b);
	printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	while (array[a] < value)
	{
		a++;
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		if (a >= fmin(b, size))
			return (-1);
	}
	return ((array[a] == value) ? (int)a : -1);
}
