#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - performs a jump search on an array
 * @array: A pointer to the first element of the array
 * @size: The size parameter represents the number of elements in the array
 * @value: The value you are searching for in the array
 *
 * Return: Index of the value if found, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a, b, k;

	if (array == NULL || size == 0)
		return (-1);
	a = 0, b = sqrt(size);
	while ((size_t)fmin(b, size) - 1 < size &&
	array[(size_t)fmin(b, size) - 1] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		a = b, b = b + sqrt(size);
		if (a >= size)
		{
			k = (size_t)(floor((sqrt(b)) - 1));
			printf("Value found between indexes [%ld] and [%ld]\n", a - k, b - k);
			k = a - k;
			while (array[k])
			{
				printf("Value checked array[%ld] = [%d]\n", k, array[k]), k++;
			}
			return (-1);
		}
	}
	printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	printf("Value found between indexes [%ld] and [%ld]\n",
	a, (size_t)fmin(b, size));
	while (array[a] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		a++;
		if (a >= fmin(b, size))
		{
			printf("Value found between indexes [%ld] and [%ld]\n", a, b - 1);
			return (-1);
		}
	}
	printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	if (array[a] == value)
		return (a);
	return (-1);
}
