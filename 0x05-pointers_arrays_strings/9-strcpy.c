#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed by src
 * incliding the terminated null byte
 * buffer pointed to by dest.
 * @dest: destination
 * @src: source
 * Return: the point back
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
		{
			break;
		}
		count++;
	}
	return (dest);
}
