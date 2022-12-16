#include "main.h"

/**
 * _memcpy - this copy from src to dest
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 * Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n)
	{
		dest[n - 1] = src[n - 1];
		n--;
	}
	return (dest);
}

