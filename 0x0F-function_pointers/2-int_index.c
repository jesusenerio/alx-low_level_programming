#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: size of the array
 * @size: this is size
 * @cmp: this compares
 * Return: 1 success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
}
