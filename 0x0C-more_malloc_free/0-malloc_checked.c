#include "main.h"

/**
 * *malloc_checked - this allocates memory using malloc
 * @b: allocator
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(93);
	}
	return (p);
}
