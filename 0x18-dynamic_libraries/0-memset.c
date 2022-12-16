#include "main.h"
#include <stdio.h>

/**
 * _memset - copies into another string
 * @s: address to memory block
 * @n: number of bytes used to assign s
 * @b: the parameter to input in s
 * Return: pointer to memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
