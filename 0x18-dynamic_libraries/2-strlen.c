#include <stdio.h>
#include "main.h"
/**
 * _strlen - length to 98;
 * @s: points to s
 * Return: length of a string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
