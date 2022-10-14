#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function as a parameter in each element of array
 * @array: the array
 * @size : size of the array
 * @action: pointer to the function
 * size_t: the size
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
