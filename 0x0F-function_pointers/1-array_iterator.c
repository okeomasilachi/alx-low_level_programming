#include "function_pointers.h"

/**
 * array_iterator - executes a parameter on each element of an array.
 * @array: array to perform operation
 * @size: size of array
 * @action: action tobe carried out
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
