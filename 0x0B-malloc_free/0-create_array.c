#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - this creates an array
 * @size: size of the array
 * @c: char
 * Return: 1
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}
	return (array);
}
