#include "main.h"
#include <stdio.h>

/**
* print_diagsums -  sum of diagonal
* @a: pointers
* @size: the size
* Return: 0
*/

void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;
	i
	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
